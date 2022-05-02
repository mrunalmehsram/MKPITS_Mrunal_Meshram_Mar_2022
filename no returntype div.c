#include<stdio.h>
#include<conio.h>
void main()
{
	fun();
}
void fun()
{
	int a=5,b=3;
	div(a,b);
}
void div(int x,int y)
{
	int r;
	r=x/y;
	printf("%d",r);
}
