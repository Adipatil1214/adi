import java.io.*;
class InpReaderEx
{
public static void main(String[] args) 
InputStreamReader inpred = new InputStreamReader(System.in);
BufferedReader bffr = new BufferedReader(inpred);
System.out.println("What is your name");
String sname = bffr.readLine();
System.out.println("Welcome "+sname+" to java world");
}
}