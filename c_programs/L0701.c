#include<stdio.h>
int main(void)
{

int a ;

printf("C| Aditya Patil \n \n");
printf("---------------------------\n");
printf("switch Case \n");
printf("=====================\n\n");
printf("Enter A : ");
scanf("%d",&a);

switch (a)
{
case 1:
    printf("one");
    break;
case 2:
    printf("two");
    break;
case 3:
    printf("three");
    break;    
default:
    printf("INVALID\n");
    break;
}
return 0;
}
