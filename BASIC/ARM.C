#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,temp,sum=0;
	clrscr();
	printf("Enter a Number : ");
	scanf("%d",&n);
	temp=n;

	while(temp!=0)
	{
		i=temp%10;
		sum=sum+(i*i*i);
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("ArmStrong");
	}
	else
	{
		printf("Not ArmStrong");
	}
	getch();
}