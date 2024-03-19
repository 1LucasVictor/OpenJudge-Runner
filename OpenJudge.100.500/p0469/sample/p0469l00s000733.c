#include<stdio.h>

int main()
{
	int k,a,b;
	scanf("%i %i %i",&k,&a,&b);
	if(!(a%k)||!(b%k)) {puts("OK");return 0;}
	int di = a/k;
	di = k*(++di);
	if(di>=a && di<=b) puts("OK");
	else puts("NG");
	return 0;
}
