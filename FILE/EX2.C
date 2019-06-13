#include<stdio.h>
#include<conio.h>

void main()
{
	int *p,n,i;

	clrscr();

	printf("Enter Array Size :");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Entered Values : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}

	getch();
}