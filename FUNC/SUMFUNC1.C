//Write a C Program to calculate Sum of Array using Function
#include<stdio.h>
#include<conio.h>

void  main()
{
	int a[100],i,n;
	clrscr();
	printf("Enter the Size of array(Max : 100) : \n");
	scanf("%d",&n);
	printf("\nEnter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSum=%d",sumarr(a,n));
	getch();
}
int sumarr(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
