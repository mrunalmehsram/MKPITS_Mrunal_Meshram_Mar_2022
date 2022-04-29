#include<stdio.h>
#include<conio.h>
void main()
{
	printf("%d",test(1,2));
	printf("%d",test(2,2));
}
int test(int x,int y)
{
	return x=y ? (x+y)*3 : x+y;
}