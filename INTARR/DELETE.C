#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p,v;
	clrscr();
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the Position for Deletion : ");
	scanf("%d",&p);

	clrscr();

	printf("Array after Deletion : \n");
	for(i=p+1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	getch();
}