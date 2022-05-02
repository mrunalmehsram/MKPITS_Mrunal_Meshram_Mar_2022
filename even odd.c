#include<stdio.h>
#include<conio.h>
int main()
{
	int  num;
	printf("enter numbers");
	scanf("%d",&num);
	if(num%2==0)
	{
	   printf("number is even=%d",num);  	
	}
	else
	{
		printf("number is odd=%d",num);
	}
}