#include<stdio.h>
int main(void)
{

int a,b,c,max ;

printf("C| Aditya Patil \n \n");
printf("---------------------------\n");


printf("Enter A : ");
scanf("%d",&a);
printf("Enter B : ");
scanf("%d",&b);
printf("Enter C : ");
scanf("%d",&c);


if (a >= b)
{
    if (a>=c)
    {
        max = a;

    }
    else 
    {
        max = c;
    }

}
else
if (b>=a)
{
    if (b >=c)
    {
        max = b;
    }

    else 
    {
        max = c;
    }
}
printf("MAX = %d", max );
    return 0;

}
