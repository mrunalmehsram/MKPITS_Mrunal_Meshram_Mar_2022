#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter the number from 1 to 12");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("january");
		break;
	case 2:
	    printf("febuary");
		break;
	case 3:
	    printf("march");
		break;
	case 4:
	    printf("april");
		break;
	case 5:
	    printf("may");
		break;
	case 6:
	    printf("june");
		break;
	case 7:
	    printf("july");
		break;
	case 8:
	    printf("august");
		break;
	case 9:
	    printf("sepetember");
		break;
	case 10:
	    printf("october");
		break;
	case 11:
	    printf("november");
		break;
	case 12:
	    printf("december");
		break;											
	}
	printf("result of num=%d",num);
}