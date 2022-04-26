#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[20]={"mrunal"};
	char name2[20]={"meshram"};
	
	printf("%s\n",name1);
	printf("%s\n",name2);
	
	strcpy(name1,name2);
}