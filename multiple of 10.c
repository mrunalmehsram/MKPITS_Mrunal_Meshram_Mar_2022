#include<stdio.h>
#include<conio.h>
void main()
{
	printf("%d",test(3));
	printf("\n%d",test(7));
	printf("\n%d",test(8));
	printf("\n%d",test(21));
}
int test (int n)
{
	return n%10<=2 || n%10<=8;
}