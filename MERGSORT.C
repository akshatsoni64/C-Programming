#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],b[100],c[200],x,n,m;
	int i=0,j=0,k=0;

	clrscr();

	printf("Enter Size of First Array : ");
	scanf("%d",&n);

	printf("Enter Size of Second Array : ");
	scanf("%d",&m);

	printf("Enter First Array (%d Numbers) : \n",n);
	for(x=0;x<n;x++)
	{
		scanf("%d",&a[x]);
	}

	printf("Enter Second Array (%d Numbers) : ",m);
	for(x=0;x<m;x++)
	{
		scanf("%d",&b[x]);
	}

	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}

	if(i<n)
	{
		for(x=i;x<n;x++)
		{
			c[k]=a[x];
			k++;
		}
	}
	if(j<m)
	{
		for(x=j;x<m;x++)
		{
			c[k]=b[x];
			k++;
		}
	}

	x=n+m;

	for(i=0;i<x;i++)
	{
		printf("\n%d",c[i]);
	}

	getch();
}