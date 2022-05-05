#include<stdio.h>
#include<conio.h>
int i,s;
void fun();
int main()
{
	int i,s;
	printf("enter two value of ",i,s);
	scanf("%d%d",&i,&s);
	fun();
}
void fun()
{
	if (s<i)
	{
		printf("%d is greater\n",i);
	}
	else
	{
		printf("%d smaller\n",s);
	}
	return;
	fun();
}