#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],i;
	printf("enter the numbers");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(i%4)
		{
			printf("number is divisible by 4\n");
		}
		else
		{
			printf("number is not divisible by 4\n");
		}
		printf("a[%d]=%d",i,a[i]);
	}
	printf("\n");
}