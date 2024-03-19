#include<stdio.h>

int main(void)
{
    int x, h, m, s;
	
	scanf("%d", &x);
	
	h = x/60/60;
	m = (x-(h*60*60))/60;
	s = x-(m*60)-(h*60*60);
	
	printf("%d:%d:%d\n", h, m, s);
	
	return 0;
    
    
}
