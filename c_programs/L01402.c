#include<stdio.h>
int power(int a,int b);
int main(void)
{
int a,b,result;

    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" power repetative function \n");
    printf("===========================\n\n");
    
    
    do
    {

    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    result = power(a,b);
    printf("%d raised to %d = %d \n",a,b,result);
   
    }
    while (b!=0);
    printf("ty");


printf("\n\n");
return 0;
}



int power(int a ,int b)
{
    if (b == 0)return 1;
    return (a*power(a,b-1));
}
 