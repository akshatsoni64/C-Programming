#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,count=0;
	clrscr();
	printf("Enter any Number : ");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("No. is Prime");
	}
	else
	{
		printf("No.is Not Prime");
	}
	getch();
}