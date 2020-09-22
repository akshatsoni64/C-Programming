#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char om[30],em[30];
    int key;

	printf("Enter Original Text : ");
	fgets(om, sizeof(om), stdin);
	
	printf("Enter Key: ");
	scanf("%d", &key);

	for(i=0; i < strlen(om) ; i++)
	{
		if(om[i]==' ')
		{
			em[i]==' ';
		}
		else if(om[i]>='a'&& om[i]<='z')
		{
			em[i]=om[i]+key;
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
// 	em[i] = "";
	printf("Your Original text : ");
	puts(om);
	printf("Your Encrypted text : ");
	puts(em);
	return 0;
}
