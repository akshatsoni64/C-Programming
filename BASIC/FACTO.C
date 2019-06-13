#include<stdio.h>
#include<conio.h>
int main()
{
int i,factor=1,n;
clrscr();
printf("Enter the value of n : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
factor=factor*i;
}
printf("Factorial of %d is %d",n,factor);
getch();
return 0;
}
