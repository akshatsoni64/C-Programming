#include<stdio.h>
#include<conio.h>

void bsort(int [],int);

void main()
{
	int i,j,a[5],temp;
	clrscr();
	printf("Enter 5 Numbers : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	bsort(a,5);

	getch();
}

void bsort(int a[],int n)
{
	int i,j,temp;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}