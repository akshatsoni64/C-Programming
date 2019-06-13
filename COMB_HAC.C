#include<stdio.h>
#include<conio.h>

void main()
{
	int s,a[10][10],i,i1,j;
	clrscr();
	printf("Enter No : ");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		i1=i;
		for(j=0;j<s;j++)
		{
			if(i1>=s)
			{
				i1=0;
			}
			printf("%d\t",i1+1);
			i1++;
		}
		printf("\n");
	}
	getch();
}