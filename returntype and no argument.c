#include<stdio.h>
#include<conio.h>
int x1,x2;//global declaration
int fun();
int main()
{
	int s;
	s=fun();
	if(s==0)
	{
		printf("%s is smaller",x1);
	}
	else
	{
		printf("%d is greater",x2);
	}
}
int fun()
{
	printf("enter two number\n");
	scanf("%d%d",&x1,&x2);
	if(x1<x2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}