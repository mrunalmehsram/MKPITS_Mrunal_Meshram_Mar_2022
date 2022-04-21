#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],i;
	printf("enter a number");
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);   
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
}