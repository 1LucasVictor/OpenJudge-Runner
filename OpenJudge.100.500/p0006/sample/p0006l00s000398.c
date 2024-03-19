#include <stdio.h>

int main(void)
{
	long long int mon,n;
	int i;
	
	mon = 100000;
	
	scanf("%lld",&n);
	
	for(i = 1;i <= n;i++){
		mon = mon + mon * 0.05;
	}
	if(mon % 10000 != 0){
		mon = mon - (mon % 10000) + 10000;
	}
	printf("%lld\n",mon);
	
	return(0);
}