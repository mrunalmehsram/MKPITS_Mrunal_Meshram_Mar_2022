#include<stdio.h>
#include<conio.h>
void main()
{
	float pi=3.14,V;
	int r,h;
	printf("enter the value of r and h");
	scanf("%d%d",&r,&h);
	V=pi*r*r*h;
	printf("%f",V);
}