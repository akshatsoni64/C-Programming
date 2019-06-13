//W.A.C.P. to Calculate A^N using Recursion
#include<stdio.h>
#include<conio.h>

void main()
{
    int base,exp;
    clrscr();
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&exp);
    printf("%d^%d = %d", base, exp, power(base,exp+1));
    getch();
}

int power(int base,int exp)
{
	if(exp!=1)
	return (base*power(base,exp-1));
}