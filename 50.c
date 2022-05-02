#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swapping x and y %d%d",x,y);
}