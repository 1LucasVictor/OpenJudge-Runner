#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(a >= d || c >= b)
		printf("0");
	else{
		if(a < c)
			printf("%d", b<d?b-c:d-c);
		else
			printf("%d", b<d?b-a:d-a);
	}
	
	return 0;
}
