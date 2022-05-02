#include<conio.h>
#include<stdio.h>
void main()
{
	int a[10],i;
	printf("enter the numbers");
	for(i=0;i<=10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=10;i++)
	{
		if(i%2)
		{
			printf("number is even\n");
		}
		else
		{
			printf("number is odd\n");
		}
		printf("a[%d]=%d",a[i],i);
	}
	printf("\n");
}