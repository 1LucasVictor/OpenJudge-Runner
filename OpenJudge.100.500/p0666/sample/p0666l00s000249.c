#include <stdio.h>
int main(void){
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	if(a-b>=0)	printf("delisious\n");
	else if(a+x-b>=0)printf("safe\n");
	else printf("dangerous\n");
	return 0;
}