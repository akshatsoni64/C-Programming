#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p,v,j;

	clrscr();

	printf("Enter Size of Array : ");
	scanf("%d",&n);

	printf("Enter %d Numbers : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the Position for Insertion : ");
	scanf("%d",&p);

	printf("Enter the New Value : ");
	scanf("%d",&v);

	for(i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=v;
	i=n+1;

	clrscr();

	printf("Array after Insertion : \n");
	for(j=0;j<i;j++)
	{
		printf("a[%d] = %d\n",j,a[j]);
	}
	getch();
}