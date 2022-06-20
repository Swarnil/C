#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};
struct node *start=NULL,*n,*store;
struct node* create() //create Node
{
	
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	return(node);
}

void InsertFirst() //Insert Node at the Beginning of the list
{
	n=create();
	printf("\nEnter Data: ");
	scanf("%d",&n->data);
	n->next=NULL;
	struct node *s;
	if(start==NULL)
	{
		start=n;
		printf("\nYour data is inserted");
    }
	else
	{
		s=start;
		n->next=s;
		start=n;
		printf("\nYour data is inserted");
	}
}

void InsertLast() //Insert Node at the last of the list
{

	n=create();
	printf("\nEnter Data: ");
	scanf("%d",&n->data);
	n->next=NULL;
	if(start==NULL)
	{
		start=n;
		printf("\nYour data is inserted");
    } 
	else
	{
		store=start;
		while(store->next!=NULL)
		{
			store=store->next;
		}
		store->next=n;
		printf("Your data is inserted");
	}
}
void AddInPosition() //Insert Node at  the Specific Position
{

	if(start==NULL)
	{
		printf("\nList is Empty");
    }
    else
    {
    	int c=1,t=0;
    	n=create();
    	printf("\nEnter position: ");
		scanf("%d",&t);
		printf("\nEnter Data: ");
		scanf("%d",&n->data);
		n->next=NULL;
		struct node *d;
    	store=start;
    	while(c!=t)
		{
			d=store;
			store=store->next;
			c++;
		}
		n->next=d->next;
		d->next=n;
		printf("Your data is inserted");
			
			
	}
}
void AddAfterItem() //Insert Node After specific Position
{
	if(start==NULL)
	{
		printf("\nList is Empty");
    }
    else
    {
    	int t;
    	n=create();
    	printf("Enter Specific Value: ");
    	scanf("%d",&t);
		printf("\nEnter Data for Insert: ");
		scanf("%d",&n->data);
		n->next=NULL;
    	store=start;
    	while(store->data!=t)
		{
			store=store->next;
		}
		n->next=store->next;
		store->next=n;
		printf("Your data is inserted");
	}
}

void delete() //Delete Node from Beginning
{
	struct node *d;
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		d=start;
		start=start->next;
		free(d);
		printf("\nYour data is deleted");
	}
}
void deletelast() //Delete Node from Last
{
	struct node *d;
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		store=start;
		while(store->next!=NULL)
		{
			d=store;
			store=store->next;
			
		}
		d->next=NULL;
		free(store);
		printf("\nYour data is deleted");
	}
}
void DelInPosition() //Delete Node of specific Position
{
	
	if(start==NULL)
	{
		printf("\nList is Empty");
    }	
    else
    {
    	int t=0,c=1;
    	printf("\nEnter position: ");
		scanf("%d",&t);
    	struct node *d;
    	store=start;
    	while(c!=t)
		{
			d=store;
			store=store->next;
			c++;
		}
		d->next=store->next;
		free(store);
		printf("Your data is Deleted");	
	}
}
void DeleteItem() //Delete Node of Specific Item
{
	
	if(start==NULL)
	{
		printf("\nList is Empty");
    }	
    else
    {
    	int t=0;
    	printf("\nEnter Specific Item: ");
		scanf("%d",&t);
    	struct node *d;
    	store=start;
    	while(store->data!=t)
		{
			d=store;
			store=store->next;
		}
		d->next=store->next;
		free(store);
		printf("Your data is Deleted");	
	}
}
void print() //Print the List
{
	
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		store=start;
		printf("\nValues are:  ");
		while(store!=NULL)
		{
		
			printf("%d\t",store->data);
			store=store->next;
		}
    }
	
}
void main()
{
	
	while(1)
	{
		int choise;
		printf("\n");
		printf("\n1.Insert Node at Beginning");
		printf("\n2.Insert Node at Last");
		printf("\n3.Insert Node at Specific Position");
		printf("\n4.Insert Node after Specific Item");
		printf("\n5.Delete Node from First");
		printf("\n6.Delete Node from Last");
		printf("\n7.Delete Node from Specific Position");
		printf("\n8.Delete Specific Node");
		printf("\n9.Display value");
		printf("\n10.Exit");
		printf("\nEnter Your Choise: ");
		scanf("%d",&choise);
		switch(choise)
		{
			
			case 1:
				InsertFirst();
				break;
			case 2:
				InsertLast();
				break;
			case 3:
				AddInPosition();
				break;
			case 4: 
				AddAfterItem();
				break;
			case 5: 
				delete();
				break;
			case 6:
				deletelast();
				break;
			case 7:
				DelInPosition();
				break;	
			case 8:
				DeleteItem();
				break;				
			case 9: 
				print();
				break;
			
			case 10: exit(0);
			
			default: printf("\nInvalid Entry\n");
				
		}
	}
	

	
}
