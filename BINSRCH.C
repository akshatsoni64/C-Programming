#include<stdio.h>

int main()
{
	int a[100],low,high,mid,i,n,x;

	printf("Enter Array Size : ");
	scanf("%d",&n);

	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter Value to search : ");
	scanf("%d",&x);

	low=0;
	high=n-1;
	mid=(low+high)/2;

	while(low<=high)
	{
		if(x<a[mid])
		{
			high=mid-1;
		}
		else if(x>a[mid])
		{
			low=mid+1;
		}
		else
		{
			printf("Found at a[%d]",mid);
			break;
		}

		mid=(low+high)/2;
	}

	if(high<low)
	{
		printf("Unsuccesful");
	}

	return 0;
}