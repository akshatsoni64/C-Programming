#include<stdio.h>
#include<conio.h>
void main()
{
 int i,min,a[5];
 clrscr();
printf("Enter 5 Numbers : ");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 min=a[0];
 for(i=1;i<5;i++)
 {
  if(a[i]<min)
  {
   min=a[i];
  }
 }
printf("Minimum No. is %d",min);
 getch();
}