#include<stdio.h>
#include<conio.h>
void main()
{
	int vow=0,cons=0;
	char n1[50],i;
	printf("enter a string");
	scanf("%s",n1);
	while(n1[i]!='\0')
	{
		if(n1[i]=='a'||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u')
		{
			vow++;
		}
		else
		{
			cons++;
		}
		i++;
	}
	printf("\n nunber of vow in string=%d",vow);
	printf("\n number of cons in string=%d",cons);
}