#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n1,n2,temp,temp1,sum=0;
	clrscr();
	printf("Enter two Intervals : ");
	scanf("%d %d",&n1,&n2);
	temp=n1;
	while(temp<=n2)
	{
		temp1=temp;
		sum=0;
		while(temp1>0)
		{
			i=temp1%10;
			sum=sum+(i*i*i);
			temp1=temp1/10;
		}
		if(sum==temp)
		{
			printf("%d\n",temp);
			temp++;
		}
	}
	getch();
}