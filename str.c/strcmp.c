#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[15]={"abcdef"};
	char str2[15]={"ABCDEF"};
	int ret;
	
	ret=strcmp(str1,str2);
	if(ret<0)
	{
		printf("str1 is less than str2");
	}
	else if(ret>0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("str1 is equal to str2");
	}
}