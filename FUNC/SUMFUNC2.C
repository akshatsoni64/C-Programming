//Write a C Program to calculate sum of 2D Array
#include<stdio.h>
#include<conio.h>

void sumarr();
int i,j;

void main()
{
	clrscr();
	sumarr();
	getch();
}

void sumarr()
{
	int a[10][10],b[10][10],sum[10][10],m,n;
	printf("Enter the Size of Row and Col : ");
	scanf("%d %d",&m,&n);
	printf("Enter %d Numbers : ",2*m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d %d",&a[i][j],&b[i][j]);
		}
	}
	printf("Addition : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d+%d\t",a[i][j],b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]= (a[i][j]+b[i][j]);
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}