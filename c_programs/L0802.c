#include<stdio.h>
int main(void)
{
int num,rev=0,rem,ognum ;

    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("Reverse and check for palindrome  \n");
    printf("=====================\n\n");
    printf("Enter  number: ");
    scanf("%d",&num);
    ognum = num;
      while (num > 0 )
    {
        rem = num %10;
        rev = rev*10 + rem;
        num = num/ 10;
    }
    printf("\n\n the OGnumber = %d",ognum);
    printf("\n the reverse number = %d\n ",rev);

    if (ognum == rev)
    {
        printf("\n The number is palindrome!");
    }else{
        printf("\n The number is NOT palindrome!");
    }
    







printf("\n\n");
return 0;
}
