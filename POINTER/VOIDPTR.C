#include<stdio.h>
#include<conio.h>
void main()
{
	void *p,*q,*r,*s;
	int i=6;
	float f=6.456789;
	double d=6789.456789;
	char c='A';
	clrscr();
	printf("Different Data types with Void Pointers : \n\n");
	p=&i;
	q=&f;
	r=&d;
	s=&c;
	printf("Integer : %d\n",*(int *)p);
	printf("Float : %f\n",*(float *)q);
	printf("Double : %lf\n",*(double *)r);
	printf("Char : %c",*(char *)s);
	getch();
}