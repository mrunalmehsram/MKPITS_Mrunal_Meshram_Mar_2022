#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
	for(c=1;c<=4;c++)
	{
		printf("*");
		if(r==4)
		continue;
	}
	for(c=4;c>=1;c--)
	{
		printf("*");
	}
	printf("\n");
    }
}