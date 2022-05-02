#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,i,rev=0,num1,count=0;
	printf("enter five digits");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		rem=num%10;
		rev=rem+rev*10;
		num=num/10;
		count++;
	}
	if(count==0)
	{
		if(num1==rev)
		{
			printf("the given number is plaindrome %d",num1);
		}
		else 
		{
			printf("the given number is not plaindrome %d",num1);
		}
	}
	else
	{
		printf("the enter number is not five digits %d",num1);
	}
}