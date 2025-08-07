
// write a program to determine the length of a string without using strlen func
#include <stdio.h>
#include <string.h>

int main (void)
{   
    int i,len,diff;
    char name1[30]={};
    char name2[30]={};
    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("string palindrome without reversal \n");

    printf("Enter the string bich | ");
    fgets(name1,30,stdin);
    
    i = 0;
    while (name1[i]!='\n')
    {
        i++;
    }
        printf("the length is %d",i);
            

    printf("\n\n");
    return 0;
}