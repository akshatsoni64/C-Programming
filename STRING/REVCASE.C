#include<stdio.h>
#include<conio.h>
void main()
{
	int i,len;
	char a[50],b[50];
	clrscr();
	printf("Enter String : ");
	scanf("%s",&a);
	len=strlen(a);

	for(i=0;i<len;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			b[i]=a[i]-32;
			printf("%c",b[i]);
		}
		else
		{
			b[i]=a[i]+32;
			printf("%c",b[i]);
		}
	}
	getch();
}