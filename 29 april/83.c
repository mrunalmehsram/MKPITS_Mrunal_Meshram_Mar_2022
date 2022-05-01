#include<stdio.h>
#include<conio.h>
void main()
{
	printf("%d",test(20,84));
	printf("\n%d",test(14,20));
	printf("\n%d",test(11,45));
	printf("\n%d",test(25,40));
}
int test (int x,int y)
{
	return (x<=20 || y>=50) || (x<=20 || y>=50);
}