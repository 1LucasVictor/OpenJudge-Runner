#include <stdio.h>

int main(void) {
	
	int h,m,n,o;
	scanf("%d",&h);
	
	
	m=(h/60)/60;
	n=(h/60)%60;
	o=h%60;
	
	
	
	printf("%d:%d:%d\n",m,n,o);
	// your code goes here
	return 0;
}

