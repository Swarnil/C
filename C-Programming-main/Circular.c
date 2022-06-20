#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
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
	struct node* temp,*q;
	temp=CreateNode();
	
	printf("Enter Value For The Node:");
	scanf("%d",&temp->info);
	temp->link=NULL;
	
	if(START==NULL)
	{
		START=temp;
		temp->link=START;
		printf("\nNode Inserted Successfully");
	}
	else
	{
		q=START;
		while(q->link!=START)
		{
			q=q->link;
		}
		q->link=temp;
		q->link=START;
		printf("\nNode Inserted Successfully");
	}
}
void Display()
{
	struct node *p;
	p=START;
	if(START==NULL)
	{
		printf("List Is Empty");
	}
	else
	{
	 do{  
        	printf("%d ", p->info);  
            p=p->link;  
    	}while(p!=START);  
	}
}
void main()
{
	int n;
	printf("\n<****CIRCULAR LINKED LIST OPERATION ****>\n");
	while(1)
	{		
		printf("\n-->> 1.Insert Last Node");
		printf("\n-->> 2.Display All Nodes");
		printf("\n-->> 0.Exit\n");
		printf("\n>>>> Enter Your Choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: InsertLast();
					break;								
			case 2: Display();
					break;
			case 0: exit(0);
			default: printf("Sorry ! Invalid Choice");
		}
	}
	
}
