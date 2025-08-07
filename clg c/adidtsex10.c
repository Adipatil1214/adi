//Experiment No 10
/*Menu driven for Doubly linked list*/
#include<stdio.h>
//#include<conio.h>
#include<malloc.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node*start=NULL,*last;
void creat_dll(int);   
void insbeg(int);
void insmid(int,int);
void insend(int);
void delbeg();
void delmid();
void delend();
void search(int);
void countnode();
void displayforward();
void displayreverse();
void main()
{
int ch,val,snv;
//clrscr();
do
{
printf("\nMain Menu\n");
printf("1.Create Double Link List\n");
printf("2.insert data at beginning of linked list\n");
printf("3.insert data at middle of linked list\n");
printf("4.insert data at end of linked list\n");
printf("5.delete data from beginning of linked list\n");
printf("6.delete data from middle of linked list\n");
printf("7.delete data from end oflinked list\n");
printf("8.Search the data in the linked list\n");
printf("9.display the data in forward direction of linked list\n");
printf("10.display the data in reverse direction  of linked list\n");
printf("11.count number of nodes from linked list\n");
printf("12.Exit\n");
printf("Enter Your Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the value to store in Linked List=");
scanf("%d",&val);
creat_dll(val);
break;
case 2:
printf("\nEnter the value to Insert at the beginning of Linked List=");
scanf("%d",&val);
insbeg(val);
break;
case 3:
printf("\nEnter the value=");
scanf("%d",&val);
printf("\nAfter Which Node=");
scanf("%d",&snv);
insmid(val,snv);
break;
case 4:
printf("\nEnter the value to insert at End of the Linked List=");
scanf("%d",&val);
insend(val);
break;
case 5:
delbeg();
break;
case 6:
printf("\nWhich value data to be deleted from linked list=");
scanf("%d",&snv);
delmid(snv);
break;
case 7:
delend();
break;
case 8:
printf("\nEnter the data to search from linked list=");
scanf("%d",&snv);
search(snv);
break;
case 9:
displayforward();
break;
case 10:
displayreverse();
break;
case 11:
countnode();
break;
case 12: printf("thank you\n");//exit();
break;
}
} while(ch!=12);
 }

void creat_dll(int val)
{
struct node *newnode,*tn;
newnode=malloc(sizeof(struct node));
newnode->data=val;
newnode->next=NULL;
if(start==NULL)
{
    start=newnode;
    newnode->prev = NULL;
}
else
{
    tn=start;
   while(tn->next!=NULL)
{
    tn=tn->next;
}
tn->next=newnode;
newnode->prev = tn;
}
last = newnode;
}

void insbeg(int val)
{
struct node *newnode;
newnode=malloc(sizeof(struct node));
newnode->data=val;
newnode->next=start;
newnode->prev= NULL;
start->prev = newnode;
start= newnode;
}

void insmid(int val,int snv)
{
struct node*newnode,*tn;
tn=start;
while(tn!=NULL)
{
if(tn->data==snv)
{
newnode=malloc(sizeof(struct node));
newnode->data=val;
newnode->next=tn->next;
newnode->prev = tn;
tn->next->prev = newnode;
tn->next=newnode;
return;
}
tn=tn->next;
}
printf("search node value notpresent in linked list\n");
}

void insend(int val)
{
struct node *newnode,*tn;
newnode=malloc(sizeof(struct node));
newnode->data=val;
newnode->next=NULL;
tn=start	;
while(tn->next!=NULL)
{
tn=tn->next;
}
     tn->next=newnode;
     newnode->prev = tn;
     last = newnode;
}

void delbeg()
{
    start=start->next;
    start->prev = NULL;
    printf("deleted at beginning\n");
}

void delmid(int snv)
{
struct node*tn;
tn=start;
while(tn!=NULL)
{
if(tn->next->data==snv)
{	
  tn->next=tn->next->next;
  printf("deleted in middle data:%d\n",snv);
  return;
}
    tn= tn->next;
}
printf("The Number Is Not Found\n");
}

void delend()
{
struct node*tn;
tn=start;
while(tn->next->next!=NULL)
{
    tn=tn->next;
}
    tn->next=NULL;
    last = tn;
    printf("deleted at end\n");
}

void displayforward()
{
struct node*tn;
if(start==NULL)
{
printf("Not valid");
return;
}
tn=start;
printf("displaying forward:\n");
while(tn!=NULL)
{
    printf("%d\n",tn->data);
    tn=tn->next;
}
}

void displayreverse()
{
struct node*tn;
if(start==NULL)
{
   printf("Not valid");
   return;
}
tn=last;
printf("displaying reverse:\n");
while(tn!=NULL)
{
    printf("%d\n",tn->data);
    tn=tn->prev;
}
}

void search(int snv)
{
int p=0;
struct node*tn;
tn=start;
while(tn!=NULL)
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
int count=0;
tn=start;
while(tn!=NULL)
{
count++;
tn=tn->next;
}
    printf("number of nodes =%d",count);
}

