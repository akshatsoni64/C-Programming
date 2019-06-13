/*W.A.C.P. to calculate No. of Alphabets , Digits , Punctuation in a String*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a[500];
	int i=0,alpha=0,digit=0,punct=0;
	clrscr();
	printf("Enter a Paragraph : ");
	gets(a);
	while(a[i]!='\0')
	{
		if(isalpha(a[i]))
		{
			alpha++;
		}
		if(isdigit(a[i]))
		{
			digit++;
		}
		if(ispunct(a[i]))
		{
			punct++;
		}
		i++;
	}
	printf("Alphabets : %d\nDigits : %d\nPunctuation : %d",alpha,digit,punct);
	getch();
}