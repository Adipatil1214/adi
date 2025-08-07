# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
typedef struct BST {
   int data;
   struct BST *lchild, *rchild;
} node;
void insert(node *, node *);  void inorder(node *);  void preorder(node *);
void postorder(node *);   node *search(node *, int, node **);

void main()  { 
   int choice;   int i,ans;     node *new_node, *root, *tmp, *parent;
   node *get_node();     root = NULL;
  //clrscr();
  printf("\nProgram For Binary Search Tree\n");
   do {
      printf("\n1.Create");    printf("\n2.Recursive Traversals");
      printf("\n3.Exit");        printf("\nEnter your choice :");
      scanf("%d", &choice);
      switch (choice) {
      case 1:
	      printf("How many Nodes You Want create in Binary Tree\n");
	      scanf("%d",&ans);
	   for(i=1;i<=ans;i++)
	   {
	    printf("plz enter %d value =\n",i);
	    new_node = get_node();
	   
	    scanf("%d", &new_node->data);
	    if (root == NULL) /* Tree is not Created */
		{   root = new_node;
		     printf("%d as a Root Node of the Tree\n",root->data);
		}
    else
	       insert(root, new_node);
	    } 	 break;
      case 2:
	 if (root == NULL)     printf("Tree Is Not Created");
	 else {
	    printf("\nThe Inorder display : ");
	    inorder(root);
	    printf("\nThe Preorder display : ");
	    preorder(root);
	    printf("\nThe Postorder display : ");
	    postorder(root);
	 } 	 break;
      }
   } while (choice!=3);
}
/*  Get new Node  */
  node *get_node() {
   node *temp;
   temp = (node *) malloc(sizeof(node));
   temp->lchild = NULL;
   temp->rchild = NULL;
   return temp;
}
/*  This function is for creating a binary search tree  */
void insert(node *root, node *new_node) {
   if (new_node->data < root->data) {
      if (root->lchild == NULL)
	 root->lchild = new_node;
      else
	 insert(root->lchild, new_node);
   printf("%d value is attached to left of %d\n",new_node->data,root->data);
   }
   if (new_node->data > root->data) {
      if (root->rchild == NULL)
	 root->rchild = new_node;
      else
	 insert(root->rchild, new_node);
printf("%d value is attached to right of %d\n",new_node->data,root->data);
   } }
/*  This function displays the tree in inorder fashion  */
void inorder(node *temp) {
   if (temp != NULL) {
      inorder(temp->lchild);
      printf("%d ", temp->data);
      inorder(temp->rchild);
   }
}
/*
 This function displays the tree in preorder fashion
 */
void preorder(node *temp) {
   if (temp != NULL) {
      printf("%d ", temp->data);
      preorder(temp->lchild);
      preorder(temp->rchild);
   }
}
/* This function displays the tree in postorder fashion */
void postorder(node *temp) {
   if (temp != NULL) {
      postorder(temp->lchild);
      postorder(temp->rchild);
      printf("%d ", temp->data);
   }
}
