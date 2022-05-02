#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("all positive divisor of %d \n",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
	}
	
}