#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,l,len1=0,len2=0;
	char a[10],b[10],c[20];
	clrscr();
	printf("Enter 2 Strings : ");
	scanf("%s",a);
	scanf("%s",b);

	for(i=0;a[i]!='\0';i++)
	{
		len1++;
	}

	for(i=0;b[i]!='\0';i++)
	{
		len2++;
	}

	l=len1+len2;

	for(i=0,j=0;i<l;i++)
	{
		if(i<len1)
		{
			c[i]=a[i];
		}
		else
		{
			c[i]=b[j];
			j++;
		}
	}

	l=len1+len2;

	for(i=0;i<l;i++)
	{
		printf("%c",c[i]);
	}
	getch();
}