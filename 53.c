#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],i,max=0,min=0;
	printf("enter the value");
	for(i=0;i<4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("min %d",min);
	printf("\n");
	printf("max %d",max);
}