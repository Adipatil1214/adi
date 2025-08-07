import pyttsx3 #pip install pyttsx3
import speech_recognition as sr #pip install speechRecognition
import datetime
import wikipedia #pip install wikipedia
import webbrowser
import os
import smtplib
import time
#import playsound
import tkinter as tk
from tkinter import messagebox
import pyjokes

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[1].id)
engine.setProperty('voice', voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("Good Morning!")

    elif hour>=12 and hour<18:
        speak("Good Afternoon!")   

    else:
        speak("Good Evening!")  

    speak("I am Jarvis Sir. Please tell me how may I help you")       

def takeCommand():
    #It takes microphone input from the user and returns string output
    query = input("enter command:")
#    r = sr.Recognizer()
#   with sr.Microphone() as source:
#      print("Listening...")
#     r.pause_threshold = 0.5
#    audio = r.listen(source)
#
#   try:
#        print("Recognizing...")    
#        query = r.recognize_google(audio, language='en-in')
#        print(f"User said: {query}\n")

#    except Exception as e:
#        # print(e)    
#        print("Say that again please...")  
#        return "None"
#    print(query)
    return query

def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.login('p.aditya.1425@gmail.com', 'dYNYrjBG26rN.uW')
    server.sendmail('p.aditya.1425@gmail.com', to, content)
    server.close()

def show_popup(message):
    def popup():
        root = tk.Tk()
        root.withdraw()  # Hide main window
        messagebox.showinfo("Reminder", message)  # Show pop-up with custom message
        root.destroy()  # Close root window
    
    popup_thread = threading.Thread(target=popup)
    popup_thread.start()


if __name__ == "__main__":
    wishMe()
    while True:
    # if 1:
        query = takeCommand().lower()
        

        # Logic for executing tasks based on query
        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'youtube' in query:
            webbrowser.open("youtube.com")

        elif 'google' in query:
            webbrowser.open("google.com")

        elif 'stackoverflow' in query:
            webbrowser.open("stackoverflow.com")   


        elif 'music' in query:
            music_dir = 'D:\\Non Critical\\songs\\Favorite Songs2'
            songs = os.listdir(music_dir)
            print(songs)    
            os.startfile(os.path.join(music_dir, songs[0]))

        elif 'time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")    
            speak(f"Sir, the time is {strTime}")

        elif 'code' in query:
            codePath = "C:\\Users\\Haris\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"
            os.startfile()

        elif 'email' in query:
            try:
                speak("What should I say?")
                content = takeCommand()
                to = "p.aditya1412@gmail.com"
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry my friend. I am not able to send this email") 
                
        elif 'shut down' in query:
            try:
                os.system('shutdown -s')   
                
            except Exception as e:
                print(e)
                print("cant shut down")
                
        elif 'timer' in query:
            try:
                speak("please type the time")
                target_time = input("Enter time in HH:MM:SS format (24-hour format): ")
                speak("What message should I show?")
                msg = takeCommand()
        
                speak(f"Timer set for {target_time}. I will remind you.")
                
                
                while True:
                    strTime = datetime.datetime.now().strftime("%H:%M:%S") 
                    if strTime == target_time:
                        show_popup(msg)
                        speak("Time is up!")
                        break  # Exit loop after showing the pop-up
                    time.sleep(1)  # Check time every second
            except Exception as e:
                print(e)
                print("something went wrong")
            
            
        elif 'joke' in query:
            joke=pyjokes.get_joke("en","chuck")
            
            speak(joke)
            print(joke)
            
            


