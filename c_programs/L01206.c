
// write a program to password 
#include <stdio.h>
#include <string.h>

int main (void)
{   
    int i,len,diff;
    char name1[30]={};
    char name2[30]={"ADITYA"};
    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("password detection \n");

    printf("Enter the string bich | ");
    fgets(name1,30,stdin);
    name1[strlen(name1)-1]='\0';
    len=strlen(name1);
    
    diff=strcmp(name2,name1);
    if (diff==0)
    {
        printf("pappu pass");
    }
    else
    {
        printf("pappu na pass");

    }
    


            

    printf("\n\n");
    return 0;
}