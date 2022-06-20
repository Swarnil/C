#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node *START=NULL;
struct node* CreateNode()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return(n);
}
void InsertLast()
{
	struct node *temp;
	temp=CreateNode();
	printf("Enter Value: ");
	scanf("%d",&temp->info);
	temp->next=NULL;
	
	if(START==NULL)
	{
		START=temp;
		printf("\n Data Inserted \n");
	}
	else
	{
		struct node *t;
		t=START;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
		printf("\n Data Inserted \n");
	}
}
void Display()
{
	if(START==NULL)
	{
		printf("Sorry ! No Data");
	}
	else
	{
		struct node *v;
		v=START;
		while(v!=NULL)
		{
			printf("%d ",v->info);
			v=v->next;
		}
	}
}
void main()
{
	int n;
	while(1)
	{
		printf("\n1.Insert Last Node");
		printf("\n2.Display All Node");
		printf("\n0.Exit");
		
		printf("\nEnter Your Choice: ");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1: InsertLast();
					break;
			case 2: Display();
					break;
			case 0: exit(0);
			default: printf("Invalid Choice");
		}
	}
}
