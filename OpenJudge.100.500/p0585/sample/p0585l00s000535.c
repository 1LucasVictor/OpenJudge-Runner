#include <stdio.h>

int main(void){

	int a,b,t;
	scanf("%d%d%d",&a,&b,&t);
	a*=10; t*=10; t+=5;
	printf("%d\n",(t/a)*b);
	return 0;
}