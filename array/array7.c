#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,s=0;
	for(i=0;i<=50;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		s=s+1/i;
	}
	for(i=0;i<=50;i++)
	{
		printf("a[i]=%d",a[i],i);
	}
	printf("\n");
}