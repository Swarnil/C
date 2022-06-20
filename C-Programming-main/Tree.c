#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *left;
	int key;
	struct node *right;
};
struct node *root=NULL;
void InsertData()
{
	struct node *p,*pr,*next;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter The Key: ");
	scanf("%d",&p->key);
	p->left=NULL;
	p->right=NULL;
	if(root==NULL)
	{
		root=p;
	}
	else
	{
		next=root;
	}
	while(next!=NULL)
	{
		if(p->key>next->key)
		{
			pr=next;
			next=next->right;
			printf("\nInserted Successfully");
		}
		else if(p->key<next->key)
		{
			pr=next;
			next=next->left;
			printf("\nInserted Successfully");
		}
	}
	if(p->key<pr->key)
	{
		pr->left=p;	
		printf("\nInserted Successfully");
	}
	else
	{
		pr->right=p;
		printf("\nInserted Successfully");
	}
}
// Inorder Traversal
void inorder() 
{
  if (root != NULL) 
  {
    inorder(root->left);
    printf("%d ",root->key);
    inorder(root->right);
  }
}
void main()
{	
	int ch;
	printf("\n*** Binary Search Tree Operation ***\n\n");
	while(1)
	{
		printf("1. >> Insert Value\n");
		printf("2. >> Inorder Traversal\n");
		printf("0. >> Exit Program\n");
		printf(">>Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: InsertData();
					break;
			case 2: inorder();
					break;
			case 0: exit(1);
			default: printf("\n Sorry! Invalid Choice.\n");
		}
	}
}
