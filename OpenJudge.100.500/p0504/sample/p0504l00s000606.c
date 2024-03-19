#include <stdio.h>
int main(void){
	int h,a;
	scanf("%d %d",&h,&a);
	h /= a;
	h += 1;
	printf("%d",h);
	return 0;
}