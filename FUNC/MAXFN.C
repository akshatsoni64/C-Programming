//-W.A.C.P. to find max out of 2 no. using function and demonstrate use of function prototype*/
#include<stdio.h>
#include<conio.h>

int max(int,int);

void main()
{
	int a,b,max1;
	clrscr();
	printf("Enter 2 Numbers : ");
	scanf("%d %d",&a,&b);
	printf("Maximum : %d",max(a,b));
	getch();
}

int max(int x,int y)
{
	if(x<y)
	{
		return y;
	}
	else
	{
		return x;
	}
}