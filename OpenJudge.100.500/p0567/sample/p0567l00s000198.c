#include <stdio.h>

int main(void) {
	
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if(c+b>a)
	d=c+b-a;
	if(b+c<a)
	d=0;
	printf("%d\n",d);
	
	// your code goes here
	return 0;
}