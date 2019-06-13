//Main-AIM: Develop Programs explaining fprintf(),fscanf(),fopen(),fclose(),feof(),getc(),putc(),fgetc(),fputc(),fseek() functions.
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char c[6]="Akshat";
	clrscr();
	fp=fopen("FILES/PRC14/FILE1.txt","w");
	if(fp==NULL)
	{
		printf("Error 404 : File Doesn't Exist");
	}
	if(feof(fp))
	{
		printf("This File Ends Here");
	}
	fprintf(fp,"%s",c);
	fclose(fp);
	fp=fopen("FILES/PRC14/FILE1.TXT","r");
	fscanf(fp,"%s",c);
	printf("%s",c);
	fclose(fp);
	getch();
}