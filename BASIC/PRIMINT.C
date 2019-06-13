#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,count=0,i,j;
clrscr();
printf("Enter two Numbers : ");
scanf("%d %d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
count=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==0)
{
printf("%d is Prime\t",i);
}
else
{
printf("%d is Not Prime\t",i);
}
}
getch();
}