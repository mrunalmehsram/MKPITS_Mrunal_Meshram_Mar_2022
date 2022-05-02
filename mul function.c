#include<stdio.h>
#include<conio.h>
void mul();
void main()
{
    mul();	
}
void mul()
{
	int num1,num2,res;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	res=num1*num2;
	printf("mul=%d",res);
}