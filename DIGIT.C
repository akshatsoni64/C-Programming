#include<stdio.h>

int main()
{
	int n,n1=0,n2=0,r=0,sum=0;

	printf("Enter Number :");
	scanf("%d",&n);

	while(n>0)
	{
		n1=n;
		r=n1%10;
		printf("%d\n",r);
		sum=sum+r;
		n2=(n2*10)+r;
		n=n/10;
	}
	printf("\nSum : %d",sum);

    return 0;
}