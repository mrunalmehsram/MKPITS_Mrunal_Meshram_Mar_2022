#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,oddsum=0;
	printf("enter value of a\n");
	scanf("%d",&a);
	
	printf("enter valuee of b\n");
	scanf("%d",&b);
	
	printf("enter value of c\n");
	scanf("%d",&c);
	
	printf("enter value of d\n");
	scanf("%d",&d);
	
	printf("enter value of e\n");
	scanf("%d",&e);
	
	if(a%2!=0)
	{
		oddsum=oddsum+a;
	}
	if(b%2!=0)
	{
		oddsum=oddsum+b;
	}
	if(c%2!=0)
	{
		oddsum=oddsum+c;
	}
	if(d%2!=0)
	{
		oddsum=oddsum=d;
	}
	if(e%2!=0)
	{
		oddsum=oddsum+e;
	}
	else
	{
		printf("error");
	}
	printf("sum of odd number=%d",oddsum);
}