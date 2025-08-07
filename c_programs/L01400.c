#include<stdio.h>


void add(float a,float b);
void sub(float a,float b);
void mult(float a,float b);
void divide(float a,float b);
int main(void)
{
float a,b;
int choice=1;
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" menu- function calculator \n");
    printf("===========================\n\n");
    printf("enter A: ");
    scanf("%f",&a);
    printf("enter B: ");
    scanf("%f",&b);

    printf("MENU\n");
    printf("1.ADD\n");
    printf("2.SUB\n");
    printf("3.MULTIPLY\n");
    printf("4.DIVIDE\n");
    printf("5.EXIT\n");
    do
    {
    
    printf("\nEnter your choice:");
    scanf("%d",&choice);
   
    switch (choice)
    {
    case 1:
        add(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        mult(a,b);
        break;
    case 4:
        divide(a,b);
        break;
    case 5:
        printf("THANK YOU!\n");
        break;
    
    default:
        printf("IT WAS A MISINPUT");
        break;
    }
    }
    while (choice!=5);


printf("\n\n");
return 0;
}



void add(float a,float b){
    float result;
    result = a + b ;
    printf("A + B = %.2f",result);
}
void sub(float a,float b){
    float result;
    result = a - b ;
    printf("A - B = %.2f",result);
}

void mult(float a,float b){
    float result;
    result = a * b ;
    printf("A * B = %.2f",result);
}

void divide(float a,float b){
    float result;
    result = a / b ;
    printf("A / B(quoient) = %.2f",result);
}




