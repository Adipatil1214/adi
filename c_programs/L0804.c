#include<stdio.h>
int main(void)
{
int num,isprime=1,i,count  ;

    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("first prime no.  \n");
    printf("=====================\n\n");
    printf("Enter  count : ");
    scanf("%d",&count );
    num = 3;
    while (count>0 ){
    
     for ( i = 2; i <= num/2 ; i++)
     {
        if (num % i == 0 )
        {
            isprime=0;
            break;        }
     }
    if (isprime == 1)
    {
        printf("%d ", num );
        count--;
    }
    num++;
    isprime=1;
     }
    
    



printf("\n\n");
return 0;
}
