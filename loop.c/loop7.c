#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	
	printf("enter the cordinate od x and y");
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	
	if(x>0&&y>0)
	{
		printf("enter coordinate is quedrant 1\n");
	}
	else if(x<0&&y>0)
	{
		printf("enter coordinate is quedrant 2\n");
	}
	else if(x<0&&y<0)
	{
		printf("enter coordinate is quadrant 3\n");
	}
	else if(x>0&&y<0)
	{
		printf("enter coordinate is quadrant 4\n");
	}
}