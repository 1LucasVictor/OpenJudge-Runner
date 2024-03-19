#include <stdio.h>
int main( void ){
	int a = 100000, n;
	for(scanf("%d",&n);n--;a-=a%1000)a=a*1.05+999;
	return!printf("%d\n",a);
}