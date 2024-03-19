#include <stdio.h>

int main(void)
{
	int a, b, t;
  	int n = 0;

  	scanf("%d %d %d", &a, &b, &t);
	
  	for (int i = 1; i * a <= t; i++) {
    	n += b;
    }
  	
  	printf("%d", n);
  
  
	return 0;
}
