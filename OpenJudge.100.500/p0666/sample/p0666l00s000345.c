#include <stdio.h>
int main(void){
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	if(a-b>=0)	printf("deliciousn");
	else if(a+x-b>=0)printf("safe");
	else printf("dangerous");
	return 0;
}