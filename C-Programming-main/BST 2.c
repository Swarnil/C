#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *left;
	int key;
	struct node *right;
};
struct node* root=NULL;
void insert()
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
	next=root;
	while(next!=NULL)
	{
		if(p->key>next->key)
		{
			pr=next;
			next=next->right;
		}
		else if(p->key<next->key)
		{
			pr=next;
			next=next->left;
		}
	}
	if(p->key<pr->key)
	{
		pr->left=p;	
	}
	else
	{
		pr->right=p;
	}
}
// Inorder Traversal
void inorder() 
{
  if (root != NULL) {
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
  }
}
void main()
{	
	int ch;
	while(1)
	{
		printf("1. Insert Value\n");
		printf("2. Inorder Traversal\n");
		printf("0. Exit Program\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
			case 2: inorder();
			case 0: exit(1);
		}
	}
}
