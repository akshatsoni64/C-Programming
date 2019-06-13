#include<stdio.h>
#include<conio.h>

int i;

struct node
{
	struct node *prev;
	int info;
	struct node *next;
};

int t=0;
struct node *start=NULL;
struct node *end=NULL;

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
		end=newnode;
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

void main()
{
	int ch;
	clrscr();
	A:
	printf("\nEnter Choice :\n1. Create\n2. Display\n0. Exit\n: ");
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
		case 0:
		{
			printf("\nExit");
			getch();
			exit(0);
		}
		default:
		{
			printf("Invaid Choice");
			goto A;
		}
	}
}