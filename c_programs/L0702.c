#include<stdio.h>
int main(void)
{

int marks ;

printf("C| Aditya Patil \n \n");
printf("---------------------------\n");
printf("switch Case \n");
printf("=====================\n\n");
printf("Enter marks : ");
scanf("%d",&marks);

switch (marks)
{
case 10:
case 9:
case 8:
       printf("GRADE: A");
    break;
case 7:
case 6:
      printf("GRADE: B");
    break;
case 5:
case 4:
 
    printf("GRADE:C ");
    break;
case 3:
case 2:
case 1:
case 0:
    printf(" FAILURE !");
      break;
default:
    printf("INVALID\n");

    break;
}
return 0;
}
