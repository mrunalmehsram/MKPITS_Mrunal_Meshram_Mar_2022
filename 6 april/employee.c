#include<stdio.h>
#include<conio.h>
void main()
{
	double eid,hr,salary,amt;
	printf("enter employee id \n");
	scanf("%lf",&eid);
	printf("enter work hr \n");
	scanf("%lf",&hr);
	printf("enter amt receive \n");
	scanf("%lf",&amt);
	salary=hr*amt;
	printf("employee id is %lf\n he received amt per hr is %lf",eid,salary);
}