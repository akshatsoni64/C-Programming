/*W.A.C.P. to print TIME , DATE , FILENAME , NO OF LINE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("TIME : %s\n",__TIME__);
	printf("DATE : %s\n",__DATE__);
	printf("FILE NAME : %s\n",__FILE__);
	printf("NO OF LINE : %d",__LINE__);
	getch();
}