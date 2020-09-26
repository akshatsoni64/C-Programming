#include<stdio.h>

void ssort(int a[],int n);

int main()
{
	int i,n=5,a[5],c;

	printf("Enter Array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	ssort(a,n);

	return 0;
}

void ssort(int a[],int n)
{
	int i,i1,j,temp;

	for(i=0;i<n;i++)
	{
		i1=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i1])
			{
				i1=j;
			}
		}
		temp=a[i];
		a[i]=a[i1];
		a[i1]=temp;
	}

	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}