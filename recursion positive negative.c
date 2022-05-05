#include<stdio.h>
#include<conio.h>
int i,s;
void fun();
int main()
{
	int i,s;
	printf("enter the value of i",i);
	scanf("%d",&i);
	fun();
}
void fun()
{
	if (s<=0)
	{
		printf("%d number is positive\n",i);
	}
	else
	{
		printf("%d number is negative\n",i);
	}
	return;
	fun();
}