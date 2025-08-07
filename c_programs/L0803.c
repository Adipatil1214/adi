#include<stdio.h>
int main(void)
{
int num,isprime=1,i  ;

    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("IS prime ???????  \n");
    printf("=====================\n\n");
    printf("Enter  number: ");
    scanf("%d",&num);
    
     for ( i = 2; i > num /2; i++)
     {
        if (num % i == 0 )
        {
            isprime=0;        }
     }
    if (isprime==0)
    {
        printf("\n The number is NOT prime ");
    }
    else
    {
          printf("\n The number is  prime ");
    }
    



printf("\n\n");
return 0;
}
