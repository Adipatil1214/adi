#include<stdio.h>
#include<conio.h>
int size=5;
int rear=-1;
int front = 0;
int val;
int choice;
int que[5];
int i;
int j;
int k;
int isquefull()
{
	if(rear==(size-1))
	   return 1;
	else
	   return 0;
}
int isqueempty()
{
	if(rear<=0 || front > rear)
	   return 1;
	else
	   return 0;
}

void enqueue(int val)
{
	if(isquefull())
		printf("queue is full\n");
	else
	{
		 rear++;
		 que[rear]=val;
	}
}
int dequeuebyif()
{
	if(isqueempty())
		printf("Queue is empty\n");
	else
	{
		val=que[front];
		front++;
		return val;
	}
}

int quefront()
{
	if(isqueempty())
		 printf("Queue is empty\n");
	else
	{
		val=que[front];
		return val;
	}
}
int querear()
{
	if(isqueempty())
		 printf("Queue is empty\n");
	else
	{
		val=que[rear];
		return val;
	}
}


void display()
{
	if(isqueempty())
		 printf("Queue is empty\n");
	else
	{printf("the elements present in queue are :");
	 printf("{");
	  for(i=front;i<=rear;i++)
	  {
		  val=que[i];
		  printf("%d, ",val);
	  }

	  printf("\b\b}");
	  printf("\n");
	}
}
int main()
{   
	do
	{
	printf("\n1.Enqueue\n2.Dequeuebyif\n3.Qfront\n4.Qrear\n5.is Queue full\n6.is Queue empty\n7.display\n8. Exit\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("Enter the value to Enque into the Queue :");
			scanf("%d",&val);
			enqueue(val);
			break;
		case 2:
			val = dequeuebyif();
			printf("Dequeue value is = %d\n",val);
			break;

		case 3:
			val = quefront();
			printf("Front value of the queue is = %d\n",val);
			break;
		case 4:
			val = querear();
			printf("Rear value of the queue is = %d\n",val);
			break;
		case 5:
			j=isquefull();
			if(j==1)
				printf("Queue is full\n");
			else
				printf("Queue is not full\n");
			break;
		case 6:
			k=isqueempty();
			if(k==1)
			printf("Queue is empty\n");
			else
			printf("Queue is not empty\n");
			break;
		case 7:
			display();
			break;
		case 8: printf("Thank you for using my program\n");
				break;
		default: printf("Invalid Input\n");
		}
	}while(choice!=8);

}
