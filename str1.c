#include<stdio.h>
#include<conio.h>
void main()
{
	int s;
	char name[100];
	char back[100];
	printf("enter the name");
	scanf("%s",name);
	strcpy(back,name);
	strrev(back);
	s=strcmp(back,name);
	if(s==0)
	{
		printf("%s enter name is palindrome");
	}
	else
	{
		printf("%s enter name is not palindrome");
	}
}