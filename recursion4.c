#include<stdio.h>
#include<conio.h>
int i=1;
void fun();
int main()
{
	fun();
}
void fun()
{
	if (i==100)
	return;
	printf(" %d",i);
	i++;
	i=i+1;
	fun();
}