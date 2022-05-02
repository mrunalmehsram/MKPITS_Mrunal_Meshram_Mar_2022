#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter a  number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("number is positive=%d",num);
	}
	else
	{
		printf("number is negativ=%d",num);
	}
}