#include <stdio.h>
#include<string.h>

int main (void)
{   
    int i;
    char name[]= {"Aditya Patil"};
    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("char array\n");
    printf("String | %s\n",name);
    printf("Size | %lu\n",sizeof(name));
    printf("length | %lu\n",strlen(name));
    printf("---------------------------\n");
    for ( i = 0; i < strlen(name); i++)
    {
        printf("%c ",name[i]);

    }
    printf("\n");
    for ( i = 0; i < strlen(name); i++)
    {
        printf("%d ",name[i]);
    }
     
    
    





    printf("\n\n");
    return 0;
}