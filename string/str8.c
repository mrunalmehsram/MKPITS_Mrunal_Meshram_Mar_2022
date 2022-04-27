#include<stdio.h>
#include<conio.h>
void main()
{
	char n1[10];
	char n2[10];
	char i;
	printf("enter any string");
	scanf("%s",n1);
	printf("enter any string");
	scanf("%s",n2);
	if(n1[i]>n2[i])
	{
		printf("string first is greater");
	}
	else if(n1[i]<n2[i])
	{
		printf("string second is greater");
	}
	else
	{
		printf("both are equal");
	}
}