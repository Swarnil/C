//Circular Linked List
#include<stdio.h>
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
		n->next=start;
		printf("\nYour data is inserted");
    }
	else
	{
		s=start;
		while(s->next!=start)
		{
				s=s->next;
		}
		s->next=n;
		n->next=start;
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
		n->next=start;
		printf("\nYour data is inserted");
    } 
	else
	{
		store=start;
		while(store->next!=start)
		{
			store=store->next;	
		}
		store->next=n;
		n->next=start;
		printf("Your data is inserted");
	}
}

void DeleteFirst() //Delete Node from Beginning
{
	struct node *d;
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		store=start;
		while(store->next!=start)
		{
				store=store->next;
		}
		store->next=start->next;
		d=start;
		start=start->next;
		free(d);
		printf("\nYour data is deleted");
	}
}

void DeleteLast() //Delete Node from Last
{
	struct node *d;
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		store=start;
		while(store->next!=start)
		{
			d=store;
			store=store->next;
			
		}
		d->next=start;
		free(store);
		printf("\nYour data is deleted");
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
		do{
			printf("%d\t",store->data);
			store=store->next;
		}while(store!=start);
    }
	
}


void main()
{
	
	while(1)
	{
		int choise;
		printf("\n");
		printf("\n1.Insert Node at First");
		printf("\n2.Insert Node at Last");
		printf("\n3.Delete Node at First");
		printf("\n4.Delete Node at last");
		printf("\n5.Display value");
		printf("\n6.Exit");
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
				DeleteFirst();
				break;
			case 4: 
				DeleteLast();
				break;
			case 5: 
				print();
				break;
			
			case 6: exit(0);
			
			default: printf("\nInvalid Entry\n");
				
		}
	}
		
}
