#include<stdio.h>
#include<conio.h>
viod main()
{
	int num1,num2,num3;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	num3=num2;
	num2=num1;
	num1=num3;
	printf("after swaping\n");
	printf("num1=%d,num2=%d",num1,num2);
}