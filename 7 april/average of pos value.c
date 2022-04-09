#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,pos=0,neg=0,total,avg;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
	printf("enter d");
	scanf("%d",&d);
	printf("enter e");
	scanf("%d",&e);
	
	if(a>0)
	{
		pos=pos+1;
		total+=a;
	}
	else
	{
		neg=neg+1;
	}
	if(b>0)
	{
		pos=pos+1;
		total+=b;
	}
	else
	{
		neg=neg+1;
	}
	if(c>0)
	{
		pos=pos+1;
		total+=c;
	}
	else
	{
		neg=neg+1;
	}
	if(d=0)
	{
		pos=pos+1;
		total+=d;
	}
	else
	{
		neg=neg+1;
	}
	if(e=0)
	{
		pos=pos+1;
		total+=e;
	}
	else
	{
		neg=neg+1;
	}
	printf("pos number are=%d\n",pos);
	printf("neg number are=%d\n",neg);
}