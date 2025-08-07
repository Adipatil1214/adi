// write a program to convert case of string entered by the user
#include <stdio.h>
#include <string.h>

int main (void)
{   
    int i,len;
    char name[30];

    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("case convert \n");

    printf("Enter the string bich | ");
    fgets(name,30,stdin);
    name[strlen(name) - 1]='\0';
    len= strlen(name);

    for ( i = 0; i < len; i++)
    {
        if ((name[i]>=65)&&(name[i]<=91))
        {
            name[i]+= 32;//to lower
        }
        else if ((name[i]>=97)&&(name[i]<=123))
        {
            name[i]-=32; //to upper
        }
         
    }
        printf("the result | %s",name);    

    printf("\n\n");
    return 0;
}