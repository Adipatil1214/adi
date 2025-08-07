#include<stdio.h>
int main(void)
{

int i , count, count2,j;
char alpha;

printf("C| Aditya Patil \n \n");
printf("---------------------------\n");
printf("Nested looping \n");
printf("=====================\n\n");
printf("Enter rows: ");
scanf("%d",&count);
printf("Enter columes: ");
scanf("%d",&count2);
alpha= 'a';

for (i = 0 ; i < count; i++)
{
    for ( j = 0; j <= i ; j++)
    {
       printf("%c ",alpha);
    alpha++;
        
    }
     printf("\n"); 
}
printf("\n\n");
return 0;
}
