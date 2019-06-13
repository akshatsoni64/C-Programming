#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a[2][2],b[2][2];

	clrscr();

	printf("Enter 1st Array (4 Numbers) : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2nd Array (4 Numbers) : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	getch();
	clrscr();

	printf("\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	getch();
	clrscr();

	printf("\nFirst Array in Row Major :\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\nSecond Array in Column Major :\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[j][i]);
		}
		printf("\n");
	}
	getch();

}