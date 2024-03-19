#include<stdio.h>
#include<string.h>
int main()
{
	char S;
	int x1,x2,x3,x4;
	scanf("%c",&S);
	x1 = S/1000;
	x2 = (S/100)-(x1*10);
        x3 = (S/10)-(x2*10)-(x1*100);
	x4 = S-(x3*10)-(x2*100)-(x1*1000);
        if(x1==x2 || x2==x3 || x3==x4 || x1==x4)
		printf("Bad\n");
        else
		printf("Good\n");
	return 0;
}
