#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,flag=0;
	char a[100],s[100];
	clrscr();

	printf("Enter String : ");
	scanf("%s",a);
	printf("Enter SubString : ");
	scanf("%s",s);

	i=0,j=0;

	while(a[i]!='\0' && s[j]!='\0')
	{
		for(i=0;a[i]!='\0';i++)
		{
			for(j=0;s[j]!='\0';j++)
			{
				if(a[i]==s[j])
				{
					flag++;
				}
				else
				{
					flag=0;
					break;
				}
			}
		}
	}

	if(flag!=0)
	{
		printf("SubString Exists");
	}
	else
	{
		printf("SubString Doesn't Exist");
	}

	getch();
}