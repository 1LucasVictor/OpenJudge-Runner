#include<stdio.h>
int main()
{
	int k, a, b;
	scanf("%d%d%d", &k, &a, &b);
	if(a % k == 0 || b % k == 0)	printf("OK");
	else{
		if(a / k == b / k)	printf("NG");
		else	printf("OK");
	}
	return 0;
 } 