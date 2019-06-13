//-W.A.C.P. to calculate , Add , Sub , Mul , Div using function and demonstrate use of function prototype
#include<stdio.h>
#include<conio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);

void main()
{
	int a,b,add1,sub1,mul1;
	float div1;
	clrscr();
	printf("Enter 2 Numbers : ");
	scanf("%d %d",&a,&b);
	printf("Addition : %d\n",add(a,b));
	printf("Subtraction : %d\n",sub(a,b));
	printf("Multiplication : %d\n",mul(a,b));
	printf("Division : %f",div(a,b));
	getch();
}

int add(int x,int y)
{
	int add;
	add=x+y;
	return add;
}

int sub(int x,int y)
{
	int sub;
	sub=x-y;
	return sub;
}

int mul(int x,int y)
{
	int mul;
	mul=x*y;
	return mul;
}

float div(int x,int y)
{
	float div;
	div=x/y;
	return div;
}
