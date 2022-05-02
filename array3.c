#include<stdio.h>
#include<conio.h>
void main()
{
   int a[5],i;
   printf("enter the numbers");
   for(i=0;i<=5;i++)
   {
   	printf("a[%d]=",i);
   	scanf("%d",&a[i]);
   }
   for(i=5;i>=0;i--)
   {
   	printf("a[%d]=%d\n",i,a[i]);
   }
   printf("\n");
   
}