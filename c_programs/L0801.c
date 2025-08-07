#include<stdio.h>
#include<math.h>
int main(void)
{
int a=0,b=1,c=1,max,i  ;

printf("C| Aditya Patil \n \n");
printf("---------------------------\n");
printf("fibonacci series \n");
printf("=====================\n\n");
printf("Enter count num: ");
scanf("%d",&max);

printf("Fibonacci Series: \n ");
printf(" 0 1 ");

for ( i = 3; i <=max ; i++)
{
    printf("%d ",c);
    a = b;
    b = c;
    c = a+b;
}





printf("\n\n");
return 0;
}
