#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,ser,f=0;
	printf("enter numbers");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
	    scanf("%d",&a[i]);
	}
	printf("enter number you want to search");
	scanf("%d",&ser);
	for(i=0;i<5;i++)
	{
		if(a[i]==ser)
		{
			f=1;
		}
	
	}
	if(f=1)
	{
		printf("present");
	}
	else
	{
		peintf("not present");
	}
}