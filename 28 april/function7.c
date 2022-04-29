#include<stdio.h>
#include<conio.h>
void main()
{
	printf("%d",test(25,5));
	printf(" \n %d",test(20,30));
	printf("\n %d",test(20,25));
}
int test (int x,int y)
{
	return x=30 ||y==30 ||(x+y)==30;
}