#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],c[200],i,m,n,j;
	clrscr();
	printf("Enter Size of 1st Array : ");
	scanf("%d",&m);
	printf("Enter %d Numbers : ",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Size of 2nd Array : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}

	for(i=0,j=0;i<m+n;i++)
	{
		if(i<m)
		{
			c[i]=a[i];
		}
		else
		{
			c[i]=b[j];
			j++;
		}
	}

	clrscr();

	printf("After Merging : \n");
	for(i=0;i<m+n;i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}
	getch();
}
