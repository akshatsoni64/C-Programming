// write a cprogram to search an int in array using pointer.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,count=0;
	int *p,m;
	clrscr();
	printf("Enter 5 Numbers : ");
	p=a;
	for(i=0;i<5;i++)
	{
		scanf("%d",p);
		p++;
	}
	printf("Enter the value you want to search : ");
	scanf("%d",&m);
	p=a;
	for(i=0;i<5;i++)
	{
		if(*p==m)
		{
			count=1;
			break;
		}
		p++;
	}
	 if(count!=0)
	 {

		printf("Value Found at a[%d]\n",i);
	  }
	  else
	  {
		printf("Value Not Found");
	  }

	getch();
}