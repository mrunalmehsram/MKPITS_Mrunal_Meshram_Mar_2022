#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("a=%d\n",a);
	a<<=2;
	b=a;
	printf("left shifted data is %d\n",b);
	
}