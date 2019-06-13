/* Write a C Program to demonstrate use of Pointer by Arithmetic Operation */
#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10,*a;
	int y=2,*b;

	clrscr();

	a=&x;
	b=&y;

	printf("Values : \n\n");
	printf("%d\n",*a);
	printf("%d\n",*b);

	getch();

	printf("\nAddition : \n");
	printf("%d\n",(*a)+(*b));

	printf("\nSubstraction : \n");
	printf("%d\n",(*a)-(*b));

	printf("\nMultiplication :\n ");
	printf("%d\n",(*a)*(*b));

	printf("\nDivision : \n");
	printf("%d\n",(*a)/(*b));
	getch();
}