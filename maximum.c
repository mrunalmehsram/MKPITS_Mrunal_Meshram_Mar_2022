#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the value \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is maximum",a);
	}
	else
	if(b>a&&b>c)
	{
		printf("%d is maximum",b);
	}
	else
	if(c>a&&c>b)
	{
		printf("%d is maximum",c);
	}
}