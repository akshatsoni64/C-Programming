#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char om[30],em[30];

	clrscr();

	printf("Enter Original Text : ");
	gets(om);

	for(i=0;om[i]!=NULL;i++)
	{
		if(om[i]==' ')
		{
			em[i]==' ';
		}
		else if(om[i]>='a'&& om[i]<='z')
		{
			em[i]=om[i]+3;
			if(em[i]>'z')
			{
				em[i]=em[i]-26;
			}
		}
		else
		{
			em[i]=om[i]+3;
			if(em[i]>'Z')
			{
				em[i]=em[i]-26;
			}
		}
	}
	em[i]=NULL;
	printf("Your Original text : ");
	puts(om);
	printf("Your Encrypted text : ");
	puts(em);
	getch();
}
