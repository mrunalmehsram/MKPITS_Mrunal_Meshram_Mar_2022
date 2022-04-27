#include<stdio.h>
#include<conio.h>
void main()
{
	char n1[50];
	char n2[50];
	char n3[50];
	int i=0,j=0;
	printf("enter first string");
	scanf("%s",n1);
	printf("enter second string");
	scanf("%s",n2);
	while(n1[i]!='\0')
	{
		n3[j]=n1[i];
		i++;
		j++;
	}
	i=0;
	while(n2[i]!='\0')
	{
		n3[j]=n2[i];
		i++;
		j++;
	}
	printf("\n string %s",n3);
}