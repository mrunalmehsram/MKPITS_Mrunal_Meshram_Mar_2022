#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,P;
	printf("enter the value of a");
	scanf("%f",&a);
	printf("enter the value of b");
	scanf("%f",&b);
	printf("enter the value of c");
	scanf("%f",&c);
	if(a+b>c)
	{
		printf("triangle is valid");
	}
	if(a+c>b)
	{
		printf("triangle is valid");
	}
	if(b+c>a)
	{
		printf("triangle is valid");
	}
	else
	{
		printf("you have enter invalid choise ");
	}
	P=a+b+c;
	printf("perimeter of the triangle is=%d",P);
}