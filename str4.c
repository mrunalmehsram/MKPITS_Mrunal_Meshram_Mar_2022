#include<stdio.h>
#include<conio.h>
void main()
{
	char n1[10];
	int i;
	printf("enter a string");
	scanf("%s",n1);
	for(i=0;n1[i]!='\0';i++)
	{
		if(n1[i]>'a'&&n1[i]<='z')
		{
			n1[i]=n1[i]-32;
		}
	}
	printf("\n uppercase %s",n1);
}