#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("enter any charecter");
	scanf("%c",&c);
	if(c>='0'&&c<='9')
	{
		printf("you have enter number");
    }
	else
	if(c>='A'&&c<='Z')
	{
	    printf(" you have enter capital letter");
		
	}
	else
	if(c>='a'&&c<='z')
	{
		printf("you have enter small letter");
	}
	else
	{
		printf("you have enter symbol");
	}
}