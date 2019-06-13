#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[5],temp;
clrscr();
printf("Enter 5 Numbers : ");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
 for(j=i+1;j<5;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 }
for(i=0;i<5;i++)
{
printf("\n%d",a[i]);
}
getch();
}