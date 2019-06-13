/*Practical 5 - Main AIM : Develop Basic programs Explaining use of the Pointers*/
/*Write a C Program to find Size and location of data type and variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10;
	long int y=9;
	short int z=8;
	signed int w=7;
	unsigned int a=6;

	float f1=11.5;
	double d1=14.5;

	char c1='A';
	long char c2='B';
	short char c3='C';
	signed char c4='D';
	unsigned char c5='E';

	clrscr();

	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%d\n",w);
	printf("%d\n",a);
	printf("size of int %d\n",sizeof(int));
	printf("size of long int %d\n",sizeof(long int));
	printf("size of short int %d\n",sizeof(short int));
	printf("size of signed int %d\n",sizeof(signed int));
	printf("size of unsigned int %d\n",sizeof(unsigned int));
	getch();
	clrscr();

	printf("%f\n",f1);
	printf("%lf\n",d1);
	printf("size of float %d\n",sizeof(float));
	printf("size of double %d\n",sizeof(double));
	getch();
	clrscr();

	printf("%c\n",c1);
	printf("%c\n",c2);
	printf("%c\n",c3);
	printf("%c\n",c4);
	printf("%c\n",c5);
	printf("size of char %d\n",sizeof(char));
	printf("size of long char %d\n",sizeof(long char));
	printf("size of short char %d\n",sizeof(short char));
	printf("size of signed char %d\n",sizeof(signed char));
	printf("size of unsigned char %d\n",sizeof(unsigned char));
	getch();
}
