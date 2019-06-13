#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,i,gcd;
clrscr();
printf("Enter two Numbers : ");
scanf("%d %d",&num1,&num2);
for(i=1;i<num2||i<num2;++i)
{
if(num1%i==0 && num2%i==0)
{
gcd=i;
}
}
printf("G.C.D. of %d and %d is %d",num1,num2,gcd);
getch();
}