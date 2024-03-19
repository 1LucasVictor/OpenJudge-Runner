#include<stdio.h>
int main()
{
	int S,x1,x2,x3,x4;
	scanf("%d",&S);
	x1 = S/1000;
	x2 = (S/100)-(x1*10);
        x3 = (S/10)-(x2*10)-(x1*100);
	x4 = S-(x3*10)-(x2*100)-(x1*1000);
        if(x1==x2 && x1!=x3 && x1!=x4 && x2!=x3 && x2!=x4 && x3!=x4)
		printf("Bad\n");
	else if(x1!=x2 && x1==x3 && x1!=x4 && x2!=x3 && x2!=x4 && x3!=x4)
		printf("Bad\n");
	else if(x1!=x2 && x1!=x3 && x1==x4 && x2!=x3 && x2!=x4 && x3!=x4)
		printf("Bad\n");
	else if(x1!=x2 && x1!=x3 && x1!=x4 && x2==x3 && x2!=x4 && x3!=x4)
		printf("Bad\n");
	else if(x1!=x2 && x1!=x3 && x1!=x4 && x2!=x3 && x2==x4 && x3!=x4)
		printf("Bad\n");
	else if(x1!=x2 && x1!=x3 && x1!=x4 && x2!=x3 && x2!=x4 && x3==x4)
		printf("Bad\n");
        else
		printf("Good\n");
	return 0;
}
