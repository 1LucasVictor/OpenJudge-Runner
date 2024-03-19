#include <stdio.h>

int main(void)
{
	long x;
	int h, m, s;
	
	h=0; m=0; s=0;
	
	scanf("%ld", &x);

	
	if(x>0){
		s = x%60;
	}
	if(x>=60){
		m = x % 3600-s;
		//printf("m %d\n", m);
		m = m/60;
	}
	if(x>=3600){
		h = x / 3600;
	}
	
	printf("%d:%d:%d\n", h, m, s);
	
	return 0;
}