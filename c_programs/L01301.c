//write a program to accept radius and calculate area of the circle

#include<stdio.h>
float myarea(float myradius);
float mycircum(float myradius);
const float pi = 3.142;
int main(void)
{

    float radius,area,circum;
    printf("C| Aditya Patil\n");
    printf("=================\n");
    printf(" Funtions \n");
    printf("==================\n");
    printf("enter radius :");
    scanf("%f",&radius);
     area = myarea(radius);
     circum = mycircum(radius);

    printf("area = %.2f\n",area);
    printf("circumference = %.2f",circum);

printf("\n\n");
return 0;
}

float myarea(float myradius)
{  
     float area1;
    area1 =pi * myradius* myradius;
    return area1;
}

float mycircum(float myradius)
{
    float circum1;
    circum1 = 2 * pi * myradius;
    return circum1;
}
