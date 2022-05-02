#include<stdio.h>
#include<conio.h>
void main()
{
	char n1[10],rev[10];
	int i,j,cnt=0;
	printf("enter a string");
	scanf("%s",n1);
	while(n1[cnt]!=i)
	{
		cnt++;
	}
	j=cnt-1;
	for(i=0;i<=cnt;i++)
	{
		rev[i]=n1[j];
		j--;
	}
	printf(rev);
	
}