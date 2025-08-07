// write a program to accept the string from user and sort it in assending order
#include <stdio.h>
#include <string.h>

int main (void)
{   
    int i,j,len;
    char name[30];
    char temp;
    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("sorting the string \n");

    printf("Enter name | ");
    fgets(name ,30,stdin);
    len = strlen(name);
    name[len-1]='\0';
    len = strlen(name);
    
    for ( i = 0; i < len-1; i++)
    {
        for ( j = 0; j < len-1; j++)
        {
            if (name[j]>name[j+1])
            {
                temp=name[j];
                name[j]=name[j+1];
                name[j+1]=temp;
            }
            

        }
        
    }
    printf("sorted name | %s\n",name);
 
    printf("\n\n");
    return 0;
}