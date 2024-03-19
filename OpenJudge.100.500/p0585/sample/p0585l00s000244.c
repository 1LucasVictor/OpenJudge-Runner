#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void)
{
	int a, b, t, c = 0, i;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &t);


	for(i=1; a*i <= t+0.5; i++){
		c += b;
	}
	
	printf("%d", c);



	return 0;
}