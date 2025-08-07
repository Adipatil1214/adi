#include<stdio.h>

int factorial(int n);
int main(void)
{
int n,fact;

    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" factorial repetition faction  \n");
    printf("===========================\n\n");
    

    do
    {

    printf("enter n: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("the factorial of %d = %d \n",n,fact);
   
    }
    while (n!=69);
    printf("ty");


printf("\n\n");
return 0;
}



int factorial(int n)
{
    if (n==0)return 1;
    return (n* factorial(n-1));
}
 