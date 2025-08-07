// write a program to check the given string is palindrome
#include <stdio.h>
#include <string.h>

int main (void)
{   
    int i,len,diff;
    char name1[30]={};
    char name2[30]={};
    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("string inversion \n");

    printf("Enter the string bich | ");
    fgets(name1,30,stdin);
    name1[strlen(name1) - 1]='\0';
    len= strlen(name1);

    for ( i = 0; i < len; i++)
    {
        name2[i]= name1[len-1-i];
         
    }
    printf("Result | %s\n",name2);
    diff= strcmp(name1,name2);
    
    if (diff==0)
    {
        printf("The string is palindrome \n");
    }
    else
    {
        printf("The string is NOT palindrome\n");
    }
    
            

    printf("\n\n");
    return 0;
}