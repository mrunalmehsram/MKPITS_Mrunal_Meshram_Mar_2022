#include<stdio.h>
#include<conio.h>
int main()
{
	char r,c;
	for(r='A';r<='D';r++)
	{
		for(c='A';c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}