#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],n,i,v;
	clrscr();
	printf("Enter Array Size : ");
	scanf("%d",&n);

	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the Value to Search : ");
	scanf("%d",&v);

	for(i=0;i<n;i++)
	{
		if(v==a[i])
		{
			break;
		}
	}

	printf("Value found at a[%d]",i);

	getch();
}