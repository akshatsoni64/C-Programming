#include<stdio.h>
#include<stdlib.h>

int i;

struct node
{
	int info;
	struct node *next;
};

int t=0;
struct node *start=NULL;

void create();
void display();
void insbeg();
void delbeg();

int main()
{
	int ch;
	A:
	printf("\nEnter Choice :\n1. Create\n2. Display\n3. Insert at Beginning \n4. Delete at Beginning\n0. Exit\n: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("Create List : \n");
			create();
			goto A;
		}
		case 2:
		{
			printf("The List is :\n");
			display();
			goto A;
		}
		case 3:
		{
			printf("Insertion at beginning : \n");
			insbeg();
			goto A;
		}
		case 4:
		{
			printf("Deletion at Beginning : \n");
			delbeg();
			goto A;
		}
		case 0:
		{
			printf("\nExit");
			exit(0);
		}
		default:
		{
			printf("Invaid Choice");
			goto A;
		}
	}

    return 0;
}

void create()
{
	int n,v;
	struct node *newnode;

	printf("Enter No. of Nodes : ");
	scanf("%d",&n);
	t=t+n;

	for(i=0;i<n;i++)
	{
		printf("Enter Info for Node %d :",i+1);
		scanf("%d",&v);
		newnode=(struct node *)malloc(sizeof(struct node *));
		newnode->info=v;
		newnode->next=start;
		start=newnode;
	}
}

void display()
{
	struct node *p;
	p=start;

	if(p==NULL)
	{
		printf("Empty List");
	}
	else
	{
		for(i=0;i<t;i++)
		{
			printf("Node-%d : %d\n",i+1,p->info);
			p=p->next;
		}
	}
	printf("\n");
}

void insbeg()
{
	int in;
	struct node *newnode;

	printf("Enter Info for Newnode : ");
	scanf("%d",&in);

	newnode=(struct node *)malloc(sizeof(struct node *));
	newnode->info=in;
	newnode->next=start;
	start=newnode;

	t=t+1;
}

void delbeg()
{
	struct node *temp;
	temp=start;
	start=start->next;
	printf("Deleted Node is %d\n",temp->info);
}