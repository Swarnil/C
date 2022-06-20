#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
struct node *START=NULL;
//For Creating Node
struct node* CreateNode()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return(n);
}

//Function For Inserting First Node
void InsertFirst()
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
}

//Function For Inserting Last Node
void InsertLast() 
{   
	struct node *n;
	n=CreateNode();
	printf("\nEnter Value For The Last Node: ");
	scanf("%d",&n->info);
	n->link=NULL;
	
	if(START==NULL)
	{
		START=n;
		printf("\n*** Last Node Inserted Successfully ***");
    } 
	else
	{	
		struct node *temp;
		temp=START;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=n;
		printf("\n*** Last Node Inserted Successfully ***");
	}
}

//Function For Inserting Value At Specific Location Given By The User
void InsertAtPosition()
{

	if(START==NULL)
	{
		printf("\nSorry ! No Data");
    }
    else
    {
    	int count=1,temp=0;
    	struct node *n,*d,*g;
    	n=CreateNode();
    	printf("\nEnter The Position(e.g 1,2,3...): ");
		scanf("%d",&temp);
		printf("\nEnter Value For The Inserted Position : ");
		scanf("%d",&n->info);
		n->link=NULL;
		
    	g=START;
    	while(count!=temp)
		{
			d=g;
			g=g->link;
			count++;
		}
		n->link=d->link;
		d->link=n;
		printf("\n*** Node Inserted Successfully At Specific Position ***");					
	}
}

//Function For Inserting Value After Any Item Given By The User
void InsertAfterItem()
{
	if(START==NULL)
	{
		printf("\nSorry ! No Data");
    }
    else
    {
    	int g;
    	struct node *n,*temp;
    	n=CreateNode();
    	printf("\nEnter The Specific Item: ");
    	scanf("%d",&g);
		printf("\nEnter Value For Inserting After The Item: ");
		scanf("%d",&n->info);
		n->link=NULL;
    	temp=START;
    	while(temp->info!=g)
		{
			temp=temp->link;
		}
		n->link=temp->link;
		temp->link=n;
		printf("\n*** Node Inserted Successfully After Specific Item ***");			
	}
}


//Function For Deleting First Node
void DeleteFirstNode()
{
	struct node *r;
	if(START==NULL)
	{
		printf("Sorry ! No Data");
	}
	else
	{
		r=START;
		START=START->link;
		free(r);
	}
	printf("\n*** First Node Deleted Successfully ***\n");
}

//Function For Deleting Last Node
void DeleteLastNode()
{
	struct node *d,*temp;
	if(START==NULL)
	{
		printf("Sorry ! No Data");
	}
	else
	{
		temp=START;
		while(temp->link!=NULL)
		{
			d=temp;
			temp=temp->link;
		}
		d->link=NULL;
		free(temp);
		printf("\n*** Last Node Deleted Successfully ***\n");
	}
}

//Function For Deleting Node,Which Position is Inserted By The User
void DeleteAtPosition() 
{
	if(START==NULL)
	{
		printf("Sorry ! No Data");
    }	
    else
    {
    	int g,count=1;
    	printf("\nEnter Position To Delete Node: ");
		scanf("%d",&g);
    	struct node *d,*temp;
    	temp=START;
    	while(count!=g)
		{
			d=temp;
			temp=temp->link;
			count++;
		}
		d->link=temp->link;
		free(temp);
		printf("\n*** Inserted Position Node Deleted Successfully ***\n");
	}
}

//Function For Deleting The Specific Item Given By The User
void DeleteItem()
{
	
	if(START==NULL)
	{
		printf("Sorry ! No Data ");
    }	
    else
    {
    	int g=0;
    	printf("\nEnter The Item You Want To Delete : ");
		scanf("%d",&g);
    	struct node *d,*temp;
    	temp=START;
    	while(temp->info!=g)
		{
			d=temp;
			temp=temp->link;
		}
		d->link=temp->link;
		free(temp);
		printf("\n*** Entered Item is Deleted Successfully ***\n");
	}
}
//Function For Displaying All Present Nodes
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
	printf("\n<**** LINKED LIST OPERATION ****>\n");
	while(1)
	{	
		printf("\n\n <-------- INSERTION -------->");		
		printf("\n-->> 1.Insert First Node");
		printf("\n-->> 2.Insert Last Node");
		printf("\n-->> 3.Insert Node At Specific Location");
		printf("\n-->> 4.Insert Node After Specific Value");
		
		printf("\n\n <-------- DELETION -------->");
		printf("\n-->> 5.Delete First Node");
		printf("\n-->> 6.Delete last Node");
		printf("\n-->> 7.Delete Node At Specific Loaction");
		printf("\n-->> 8.Delete Node After Specific Value\n");
		
		printf("\n-->> 10.Display All Nodes");
		printf("\n-->> 0.Exit\n");
		printf("\n>>>> Enter Your Choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: InsertFirst();
					break;
			case 2: InsertLast();
					break;
			case 3: InsertAtPosition();
					break;
			case 4: InsertAfterItem();
					break;
			case 5: DeleteFirstNode();
					break;
			case 6: DeleteLastNode();
					break;	
			case 7: DeleteAtPosition();
					break;	
			case 8: DeleteItem();
					break;								
			case 10: DisplayNode();
					break;
			case 0: exit(0);
			default: printf("Sorry ! Invalid Choice");
		}
	}
	
}
