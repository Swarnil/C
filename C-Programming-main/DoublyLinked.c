#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
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
	struct node *p,*q;
	p=CreateNode();
	printf("Enter Your Data:");
	scanf("%d",&p->data);
	p->prev=NULL;
	p->next=NULL;
	
	if(START==NULL)
	{
		START=p;
	}
	else
	{
		q=START;
		while (q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->prev=q;
	}
	printf("\n*** Last Node Inserted Succsessfully ***\n");
}
void InsertFirst()
{
	struct node *p;
	p=CreateNode();
	printf("\nEnter Data: ");
	scanf("%d",&p->data);
	p->next=NULL;
	p->prev=NULL;
	if(START==NULL)
	{
		START=p;
	}
	else
	{
		p->next=START;
		START->prev=p;
		START=p;
	}
	printf("\n*** First Node Inserted Successfully ***\n");
}
void DeleteFirstNode()
{
	struct node *r;
	if(START==NULL)
	{
		printf("\nSorry ! No Data");
	}
	else
	{
		r=START;
		START=r->next;
		START->prev=NULL;
		free(r);
	}
	printf("\n*** First Node Deleted Successfully ***\n");
}
void DeleteLast()
{
	struct node *p,*q;
	if(START==NULL)
	{
		printf("\nSorry ! No Data");
	}
	else
	{
		p=START;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
			
		}
		q->next=NULL;
		free(p);
		printf("\n*** Last Node Deleted Successfully ****\n");
	}
}
void Display()
{
	if(START==NULL)
	{
		printf("\nSorry ! No Data");
	}
	else
	{
		struct node *d;
		d=START;
		while(d!=NULL)
		{
			printf("%d ",d->data);
			d=d->next;
		}
	}
}
void main()
{
	int n;
	while(1)
	{
		printf("\n\n 1. Insert At Last");
		printf("\n 2. Insert At First");
		printf("\n 3. Delete First Node");
		printf("\n 4. Delete Last Node");
		printf("\n 10. Display");
		printf("\n 0. Exit");
		printf("\n Enter Your Choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1: InsertLast();
					break;
			case 2: InsertFirst();
					break;
			case 10:Display();
					break;
			case 3: DeleteFirstNode();
					break;
			case 4: DeleteLast();
					break;
			case 0: exit(0);
			default: printf("Invalid Choice");
		}
	}
}
