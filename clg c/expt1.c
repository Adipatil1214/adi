#include <stdio.h>
#include <conio.h>

int size=5;
int top=-1;
int val;
int choice;
int STK[5];
int i;
int j;
int k;
int isstkfull()
{
    if(top==(size-1))
       return 1;
    else
       return 0;
}
int isstkempty()
{
    if(top==-1)
       return 1;
    else 
       return 0;
}

void push(int val)
{
    if(isstkfull())
        printf("Stack is full\n");
    else
    {
         top++;
         STK[top]=val;
         printf("The pushed value is %d",val);
    }
}
int pop()
{
    if(isstkempty())
    printf("Stack is empty\n");
    else
    {
        val=STK[top];
        top--;
        return val;
    }
}
int stktop()
{
    if(isstkempty())
    printf("Stack is empty\n");
    else
    {
        val=STK[top];
        return val;
    }
}
void display()
{
    if(isstkempty())
    printf("Stack is empty\n");
    else
    { 
      printf("\nThe elements present in stack are :\n");
      printf("[");
      for(i=top;i>=0;i--)
      {
          val=STK[i];
          
          printf("%d, ",val);
          
      }

      printf("\b\b]");
    }
}
int main()
{
    do
    {
    printf("\n1.push\n2.pop\n3.Stacktop\n4.is Stack full\n5.is Stack empty\n6.display\n7. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter the value to be pushed into the Stack\n");
            scanf("%d",&val);  
            push(val);
            break;
        case 2:
            val = pop();
            printf("\nPopped value is = %d\n",val);
            break;
        case 3:
            val = stktop();
            printf("\nTop value of stack = %d\n",val);
            break;
        case 4:
            j=isstkfull();
            if(j==1)
                printf("Stack is full\n");
            else
                printf("Stack is not full\n");
            break;
        case 5:
            k=isstkempty();
            if(k==1)
            printf("Stack is empty\n");
            else 
            printf("Stack is not empty\n");
            break;
        case 6:
            display();
            break;
        case 7: printf("Thank you for using my program\n");
                break;

        default: printf("Please enter valid input\n");        
                
        }
}while(choice!=7);
getch();
}