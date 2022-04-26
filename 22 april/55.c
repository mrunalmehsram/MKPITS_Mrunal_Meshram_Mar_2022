#include<stdio.h>
#include<conio.h>
void main()
{
	int a,x=0,y;
	printf("enter a number less then 500\n");
	scanf("%d",&a);
	y=a;
	if(y<1||y>999)
	{
		printf("the given number is out of range\n");
	}
	else
	{
		x += y%10;
		y /= 10;
		x += y%10;
		y /= 10;
		x += y%10;
	}
	printf("sum of digits %d\n",a,x);
	
}