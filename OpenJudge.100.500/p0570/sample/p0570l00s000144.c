#include <stdio.h>


int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	int k;
	if((a+b) % 2 == 1) printf("IMPOSSIBLE");
	else {
		k = (a+b)/2;
		printf("%d",k);
	}
	
	return 0;
}

