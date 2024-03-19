#include <stdio.h>
#include <math.h>
 
int main(void) {
	// your code goes here
	int h,a;
	scanf("%d%d",&h,&a);
	float p = h*1.0/a;
	p = ceil(p);
	printf("%d",(int)p);
	return 0;
}