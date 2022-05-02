#include<stdio.h>
#include<conio.h>
void main()
{
	printf("%d",test(103));
	printf("\n %d",test(90));
	printf("\n %d",test(89));
}
int test(int x)
{
	if(abs(x-100)<=10 || abs(x-200)<=10)
	return 1;
	return 2;
}