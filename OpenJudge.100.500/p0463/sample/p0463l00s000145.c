#include<stdio.h>
int main()
{
	int n, i;
	scanf("%d",&n);
	i = n%10;
	if (i==2 || i==4 || i==5 || i==7 || i==9)
		printf("hon");
	else if (i==0 || i==1 || i==6 || i==8)
		printf("pon");
	else
		printf("bon");
	return 0;
	
}