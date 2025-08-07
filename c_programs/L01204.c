
// write a program to determine if the given string is the palindrome without doing 
// reversal or using second array
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
    name1[strlen(name1) - 1]='\0';
    len= strlen(name1);

    for ( i = 0; i < len; i++)
    {
        if (name1[i]!=name1[len-1-i])
        {
            diff=1;
            break;
        }
        
         
    }
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