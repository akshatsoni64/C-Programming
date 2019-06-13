#include<stdio.h>
#include<conio.h>

void main()
{
	int n,n1=0,n2=0,r=0,sum=0;

	clrscr();

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

	getch();
}