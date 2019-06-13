#include<stdio.h>
#include<conio.h>

void main()
{
	int i,l1=0,l2=0,flag;
	char a[100],b[100];

	clrscr();

	printf("Enter 2 Strings : \n");
	gets(a);
	gets(b);

	for(i=0;a[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;b[i]!='\0';i++)
	{
		l2++;
	}

	i=0;

	if(l1==l2)
	{
		while(a[i]!='\0' && b[i]!='\0')
		{
			if(a[i]==b[i])
			{
				flag=1;
				i++;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	else
	{
		printf("\nNot Equal\n");
		getch();
		exit(0);
	}

	if(flag==0)
	{
		printf("\nNotEqual\n");
	}
	if(flag!=0)
	{
		printf("\nEqual\n");
	}
	getch();
}