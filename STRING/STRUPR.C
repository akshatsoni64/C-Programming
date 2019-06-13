#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char a[50];

	clrscr();

	printf("Enter String : ");
	scanf("%s",&a);

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
	}

	printf("\n%s",a);
	getch();
}