#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i,num,num1,num2;
	printf("enter number");
	for(i=0;i<=6;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=6;i++)
	{
		a[0]=num;
		num=a[5];
		
		a[1]=num;
		num1=a[4];
		
		a[2]=num;
		num2=a[3];
		printf("a[%d]=%d\n",a[i],i);
	}
	printf("\n");
}