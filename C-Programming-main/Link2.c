#include<stdio.h>
struct node* CreateNode();
struct node{
	int info;
	struct node *link;
};
struct node *START=NULL;
void InsertNode(struct node* p)
{
	struct node *temp;
	temp=p;
	printf("Enter Value: ");
	scanf("%d",&temp->info);
	temp->link=NULL;
	
	if(START==NULL)
	{
		START=temp;
	}
	else
	{
		struct node *t;
		t=START;
		while(t->link != NULL)
		{
			t=t->link;
		}
		t->link=temp;
	}
	printf("\n*** %d is Inserted Successfully ***\n",temp->info);
}
void DisplayNode()
{
	if(START==NULL)
	{
		printf("Sorry ! No Data");
	}
	else
	{
		struct node *t;
		t=START;
		
		printf("\n ****** Values Are ****** \n");
		printf("\n**************************************** \n");
		while(t!=NULL)
		{
			printf("%d ",t->info);
			t=t->link;
		}
		printf("\n**************************************** \n");
	}
}
void DeleteNode()
{
	struct node *p;
	p=START;
	while(p->link->link!=NULL)
	{
		p=p->link;
	}
	free(p->link);
	p->link=NULL;
}
void main()
{
	struct node* CreateNode()
	{
		struct node *n;
		n=(struct node*)malloc(sizeof(struct node));
		return(n);
	}
	int g;
	printf("<**** LINKED LIST OPERATION ****>\n");
	while(1)
	{			
		printf("\n1.Insert\n");
		printf("2.Display\n");
		printf("0.Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d",&g);
		switch(g)
		{
			case 1: InsertNode();
					break;
			case 2: DisplayNode();
					break;
			case 3: DeleteNode();
					break;
			case 0: exit(0);
			default: printf("Sorry ! Invalid Choice");
		}
	}
	
}

