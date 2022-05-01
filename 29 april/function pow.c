#include<stdio.h>
#include<conio.h>
void main()
{
	fun1();
}
void fun1()
{
	int x,y;
    printf("enter the value of x");
    scanf("%d%d",&x);
}
void pow(int a)
{
	int i,pow;
	i=1;
	pow=pow*a;
	printf("pow=%d",pow);
}