#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,len,flag=0;
	char a[50],*ptr,c;
	clrscr();
	printf("Enter String : ");
	gets(a);
	len=strlen(a);
	printf("Enter the character you want to search : ");
	scanf("%c",&c);
	//With Function :
	ptr=strchr(a,c);
	if(ptr)
	{
		printf("Character %c found at a[%d]\n",c,ptr-a);
	}
	else
	{
		printf("\nNot found\n");
	}
	//Without Function :
	for(i=0;i<len;i++)
	{
		if(c==a[i])
		{
			flag++;
			break;
		}
	}
	if(flag!=0)
	{
		printf("\nFound at a[%d]",i);
	}
	else
	{
		printf("Not Found");
	}
	getch();
}