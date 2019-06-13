#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("Enter 5 Numbers : ");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if(a[i]==0)
{
printf("\nZero found\n");
printf("\nFirst zero is at a[%d]",i);
}
}
getch();
}