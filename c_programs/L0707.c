#include<stdio.h>
#include<math.h>
int main(void)
{
int num;
int i, fact=1 ;

printf("C| Aditya Patil \n \n");
printf("---------------------------\n");
printf("Nested looping \n");
printf("=====================\n\n");
printf("Enter num: ");
scanf("%d",&num);
for ( i = num; i > 1 ; i--)
{
    fact = fact*i ;
} 

printf("fac = %d\n",fact  );



printf("\n\n");
return 0;
}
