#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	fun1();
	fun2();
	fun3();
	fun4();	
}
void fun1()
{
	int a,b;
	add(a,b);
}
void add(int x,int y)
{
	int add;
	add=x+y;
	printf("add=%d",add);
}
void fun2()
{
	int a,b;
	sub(a,b);
}
void sub(int x,int y)
{
	int sub;
	sub=x-y;
	printf("sub=%d",sub);
}
void fun3()
{
	int a,b;
	div(a,b);
}
void div(int x,int y);
{
	int div;
	div=x/y;
	printf("div=%d",div);
}
void fun4()
{
	int a,b;
	mul(a,b);
}
void mul(int x,int y)
{
	int mul;
	mul=x*y;
	printf("mul=%d",mul);
}