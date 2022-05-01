#include<stdio.h>
#include<conio.h>
void main()
{
	printf("%d",test(78,95));
	printf("\n%d",test(95,95));
	printf("\n%d",test(95,70));
}
int test(int x,int y)
{
	int n=100;
    int val=abs(x-n);
    int val2=abs(y-n);
    return val==val2 ? (val<val2 :x:y);
}