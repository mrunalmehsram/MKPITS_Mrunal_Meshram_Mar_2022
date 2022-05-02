#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	printf("enter the numbers");
	for(i=0;i<=5;i++);
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		a[i]=i+i+i+i+i+i;
		printf("a[%d]=%d",a[i],i);
		
	}
	printf("\n");
}