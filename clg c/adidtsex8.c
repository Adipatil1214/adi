//Experiment No 8
/*Menu driven for Circular single linked list*/
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
struct node*start=NULL;
void creat_csll(int);
void insbeg(int);
void insmid(int,int);
void insend(int);
void delbeg();
void delmid();
void delend();
void search(int);
void countnode();
void display();
void main()
{
int ch,val,snv;
clrscr();
do
{
printf("\nMain Menu\n");
printf("1.Create Circular Single Link List\n");
printf("2.insert data at beginning of linked list\n");
printf("3.insert data at middle of linked list\n");
printf("4.insert data at end of linked list\n");
printf("5.delete data from beginning of linked list\n");
printf("6.delete data from middle of linked list\n");
printf("7.delete data from end oflinked list\n");
printf("8.Search the data in the linked list\n");
printf("9.display the data of linked list\n");
printf("10.count number of nodes from linked list\n");
printf("11.Exit\n");
printf("Enter Your Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:  printf("\nEnter the value to store in Linked List=");
scanf("%d",&val);
creat_csll(val);    break;
case 2: printf("\nEnter the value to Insert at the beginning of Linked List=");
scanf("%d",&val);
insbeg(val);   break;
case 3: printf("\nEnter the value=");
scanf("%d",&val);
printf("\nAfter Which Node=");
scanf("%d",&snv);
insmid(val,snv);  break;
case 4: printf("\nEnter the value to insert at End of the Linked List=");
scanf("%d",&val);
insend(val);   break;
case 5:  delbeg();    break;
case 6:  printf("\nWhich value data to be deleted from linked list=");
scanf("%d",&snv);
delmid(snv);   break;
case 7:  delend();   break;
case 8:  printf("\nEnter the data to search from linked list=");
scanf("%d",&snv);
search(snv);   break;
case 9:  display();   break;
case 10: countnode();     break;
case 11: printf("thank you\n");//exit();  break;
}
} while(ch!=11);
 }

void creat_csll(int val)
{
struct node *newnode,*tn;
newnode = malloc(sizeof(struct node));
newnode->data=val;
newnode->next=NULL;
if(start==NULL)
{
start=newnode;
}
else
{
tn=start;
while(tn->next!=start)	
{
tn=tn->next;
}
tn->next=newnode;
}
    newnode->next = start;
}


void insbeg(int val)
{
struct node *newnode,*tn;
newnode=malloc(sizeof(struct node));
newnode->data=val;
newnode->next=start;
tn = start;
while(tn->next!=start)
{  
       tn = tn->next;
}
               tn->next = newnode;
               start = newnode;
}

void insmid(int val,int snv)
{
struct node*newnode,*tn;
tn=start;
while(tn->next !=start)
{
if(tn->data==snv)
{
newnode=malloc(sizeof(struct node));
newnode->data=val;
newnode->next=tn->next;
tn->next=newnode;
return;
}
      tn=tn->next;
}
      printf("search node value not present in linked list\n");
}

void insend(int val)
{
struct node *newnode,*tn;
newnode=malloc(sizeof(struct node));
newnode->data=val;
tn=start;
while(tn->next!=start)
{
tn=tn->next;
}
       tn->next = newnode;       
       newnode-> next  = start; 
}

void delbeg()
{
struct node *tmp,*tn;
tn=tmp= start;
while(tn->next!=start)
{
tn=tn->next;
}
       tn->next = start->next;       
       start = start-> next ; 
       //free(tmp);
       printf("deleted from begining");
       return;
}

void delmid(int snv)
{
struct node*tn,*tmp;
tn=start;
while(tn->next!=start)
{
if(tn->next->data==snv)
{
tmp = tn->next;
tn->next=tn->next->next;
tmp->next = NULL;
printf("\n deleted node in middle=%d\n",snv);
return;
}
tn= tn->next;
}
  //Free(tmp);
printf("The Number Is Not Found\n");
}

void delend()
{
struct node*tn;
tn=start;
while(tn->next->next!=start)
{
tn=tn->next;
}
tn->next=start;
printf("deleted at end\n");
return;
}

void display()
{
struct node*tn;
if(start==NULL)
{
printf("Not valid");
return;
}
 tn=start;
 printf("the data in nodes:\n");
while(tn->next!=start)
{
 	   printf("%d\n",tn->data);
   	  tn=tn->next;
}
    printf("%d\n",tn->data);
}

void search(int snv)
{
int p=0;
struct node*tn;
tn=start;
while(tn->next!=start)
{
p++;
if(tn->data==snv)
{
printf("%d found at %d",snv,p);
return;
}
tn=tn->next;
}
    printf("number is not found\n");
}

void countnode()
{
struct node*tn;
int count=1;
tn=start;
while(tn->next!=start)
{
count++;
tn=tn->next;
}
    printf("number of nodes =%d",count);
}
