#include<stdio.h>
#include<conio.h>
void fun(int y1,int y2);
int main()
{
	int x1,x2;
	printf("enter two numbers\n");
	scanf("%intd%d",&x1,&x2);
	fun(x1,x2);
}
void fun(int y1,int y2)
{
	if(y1<y2)
	{
		printf("%d is smaller",y1);
	}
	else
	{
		printf("%d is greater",y2);
	}
}