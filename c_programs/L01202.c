// write a program to reverse a string given by the user
#include <stdio.h>
#include <string.h>

int main (void)
{   
    int i,len;
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
        printf("the result | %s",name2);    

    printf("\n\n");
    return 0;
}