#include<stdio.h>
#include<conio.h>
void main()
{
	int a[7],i;
	printf("enter numbers");
	for(i=0;i<=7;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=7;i++)
	{
		if(a[i]>0)
		{
			a[i]=100;
		}
		else
		{
			a[i]=0;
		}
		printf("a[%d]=%d",a[i],i);
	}
	printf("\n");
}