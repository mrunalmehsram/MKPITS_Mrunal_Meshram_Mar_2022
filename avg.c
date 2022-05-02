#include<stdio.h>
#include<conio.h>
void main()
{
	float a1,a2,b1,b2,avg;
	printf("enter two numbers weight and number of purchase");
	scanf("%f%f%f%f",&a1,&a2,&b1,&b2);
	avg=((b1*a1)+(b2*a2))/(a1+a2);
	printf("the avg of the value of items is %f",avg);
}