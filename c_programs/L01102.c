#include <stdio.h>
#include<string.h>

int main (void)
{   
    int i;
    char name[20];
    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("char array\n");

    /*
    Alter nate method 
    scanf("%s",name);   //works only for 1st word
    get(name);          //works for full name but give runtime error(dont put longer string than limit)   */
    printf("Enter | ");
    fgets(name ,20,stdin);
    name[strlen(name)-1]='\0';
    printf("String | %s\n",name);
    printf("Size   | %lu\n",sizeof(name));
    printf("length | %lu\n",strlen(name));
    printf("---------------------------\n");
  
  
     
    
    





    printf("\n\n");
    return 0;
}