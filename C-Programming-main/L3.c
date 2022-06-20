#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};

//For Creating Node
struct node* CreateNode()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return(n);
}
//Function For Inserting First Node
struct node* InsertFirst(struct node *START)
{	
	struct node *temp;
	temp=CreateNode();
	printf("\nEnter Value For The First Node: ");
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
	return(START);
	
}

//Function For Displaying All Present Nodes
void DisplayNode(struct node *START)
{
	if(START==NULL)
	{
		printf("Sorry ! No Data");
	}
	else
	{
		struct node *t;
		t=START;
		
		printf("\n <------ Values Are ------> \n");
		printf("\n**************************************** \n");
		while(t!=NULL)
		{
			printf("%d ",t->info);
			t=t->link;
		}
		printf("\n**************************************** \n");
	}
}

void main()
{
	int n;
	struct node *START=NULL,*temp;
	printf("\n<**** LINKED LIST OPERATION ****>\n");
	while(1)
	{		
		printf("\n-->> 1.Insert First Node");
	
		printf("\n-->> 2.Display All Nodes");
		printf("\n-->> 0.Exit\n");
		printf("\n>>>> Enter Your Choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: START=InsertFirst(START);
					break;								
			case 2: DisplayNode(START);
					break;
			case 0: exit(0);
			default: printf("Sorry ! Invalid Choice");
		}
	}
	
}
