//Write a C program to check if a given number is within 2 of a multiple of 10.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter Any Number ");
	scanf("%d",&n);
	
	if(n%10<=2 || n%10>=8)
	{
		printf("Within the to of multiple of 10");
	}
	else
	{
		printf("Not Within the to of multiple of 10");
	}
}