#include<stdio.h>
#include<conio.h>
void fun();
int main()
{
	fun();
}
void fun()
{
	int x1,x2;
	printf("enter two numbers\n");
	scanf("%d%d",&x1,&x2);
	if(x1<x2)
	{
		printf("%d is smaller",x1);
	}
	else
	{
		printf("%d is greater",x2);
	}
}