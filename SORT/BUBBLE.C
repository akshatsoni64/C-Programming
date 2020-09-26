#include<stdio.h>

void bsort(int [],int);

int main()
{
	int i,j,a[5],temp;
	printf("Enter 5 Numbers : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	bsort(a,5);

	return 0;
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