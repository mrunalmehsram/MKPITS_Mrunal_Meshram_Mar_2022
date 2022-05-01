#include<stdio.h>
#include<conio.h>
void sub();
void main()
{
    sub();	
}
void sub()
{
	int num1,num2,res;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	res=num1-num2;
	printf("sub=%d",res);
}