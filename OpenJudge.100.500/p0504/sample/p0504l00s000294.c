#include <stdio.h>
int main(void){
	int h,a,b;
	scanf("%d %d",&h,&a);
	b = h % a;
	h /= a;
	if(b != 0)
	h += 1;
	printf("%d",h);
	return 0;
}
