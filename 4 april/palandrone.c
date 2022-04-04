#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,b,c,rev;
	printf("enter 3 numbers");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	rev=a*100+b*10+c*1;
	printf("%d",rev);
	if(num==rev)
	{
		printf("enter number is palindrome");
	}
	else
	{
		printf("enter number is not palindrone");
	}
}