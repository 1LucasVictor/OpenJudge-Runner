#include<stdio.h>
int main()
{
	int a,x;
	scanf("%d",&a);
	
	if(a>10)
	{
		x=a%10;
	}
	else
	{
		x=a;
	}
	
	
	switch(x)
	{
		case(1):
			printf("pon");
			break;
		case(2):
			printf("hon");
			break;
		case(3):
			printf("bon");
			break;
		case(4):
			printf("hon");
			break;
		case(5):
			printf("hon");
			break;
		case(6):
			printf("pon");
			break;
		case(7):
			printf("hon");
			break;
		case(8):
			printf("pon");
			break;
		case(9):
			printf("hon");
			break;
		case(0):
			printf("pon");
			break;
		default:
			printf("Defualt");
			break;
	}
	
}