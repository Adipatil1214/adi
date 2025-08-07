#include<stdio.h>

struct circle1
{
    int radius;
    float area;
};
union circle2
{
    int radius;
    float area;
};



int main(void)
{   const float pi = 3.142;
    struct circle1 c1;
    union circle2 c2;
// 
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" union vs structure \n");
    printf("=====================\n\n");

   printf("size of c1 = %lu\n",sizeof(c1));
   printf("size of c2 = %lu\n",sizeof(c2));
    
    printf("enter radius for c1: ");
    scanf("%d",&c1.radius);
    printf("enter radius for c2: ");
    scanf("%d",&c2.radius);
    c1.area= pi*c1.radius*c1.radius;
    c2.area= pi*c2.radius*c2.radius;


    printf("\n\n");
    printf("c1 radius = %d\n",c1.radius);
    printf("c1 area = %f\n",c1.area);
    printf("c2 radius = %d\n",c2.radius);
    printf("c2 area = %f",c2.area);












printf("\n\n");
return 0;
}