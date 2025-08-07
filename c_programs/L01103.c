#include <stdio.h>
#include<string.h>

int main (void)
{   
    int i,len;
    char middlename[30]={};
    char firstname[30]={};
    char lastname[30]={};
    char fullname[100]={};
    printf("C| Aditya Patil\n");
    printf("--------------------\n");
    printf("adding char array\n");

    printf("Enter first name | ");
    fgets(firstname ,20,stdin);
    len = strlen(firstname);
    firstname[len-1]='\0';

    printf("Enter middle name | ");
    fgets(middlename ,20,stdin);
    len = strlen(middlename);
    middlename[len-1]='\0';
    
    printf("Enter last name | ");
    fgets(lastname ,20,stdin);
    len = strlen(lastname);
    lastname[len-1]='\0';


    strcat(fullname , firstname);
    len = strlen(fullname);
    fullname[len]=' ';
    strcat(fullname, middlename);
    len = strlen(fullname);
    fullname[len]=' ';
    strcat(fullname , lastname);

    
    printf("full name | %s\n",fullname);
 
  
  
     
    
    





    printf("\n\n");
    return 0;
}