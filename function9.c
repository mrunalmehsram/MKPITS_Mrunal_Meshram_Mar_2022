#include<stdio.h>
#include<conio.h>
void main()
{
	printf("%d",test(3));
	printf("\n %d",test(14));
	printf("\n %d",test(12));
	printf("\n %d",test(37));
}
int test(int n)
{
	return n%3==0 || n%7==0;
}