#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,n,temp;
	clrscr();
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
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

	getch();

	printf("Array after Sorting in Ascending Order : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}