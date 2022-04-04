#include<stdio.h>
#include<conio.h>
void main()
{
	
int num,a,b,c,rev,res;
int res2,res3,resf;
printf("enter 3 numbers");
scanf("%d",&num);
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
  
res=a*a*a;
res2=b*b*b;
res3=c*c*c;
resf=res+res2+res3;
if(num==resf)
{
	printf("number is amstrong");
}
if(num=!resf)
{
	printf("number is not amstrong");
}
}  