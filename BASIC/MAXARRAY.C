#include<stdio.h>
#include<conio.h>
void main()
{
 int i,max,a[5];
 clrscr();
 printf("Enter 5 Numbers : ");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=1;i<5;i++)
 {
  if(a[i]>max)
  {
   max=a[i];
  }
 }
 printf("Maximum No. is %d",max);
 getch();
}