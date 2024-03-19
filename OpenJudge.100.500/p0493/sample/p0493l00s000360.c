#include <stdio.h>
int main(void) {
	int x,y;
	scanf("%d",&x);
	y=x/500*1000;
	x=x-x/500*500;
	y=y+x/5*5;
	printf("%d\n",y);
	return 0;
}
