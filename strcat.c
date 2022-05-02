#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[10]={"my name"};
	char name2[10]={" is mrunal"};
	strcat(name1,name2);
	puts(name1);
	puts(name2);
}