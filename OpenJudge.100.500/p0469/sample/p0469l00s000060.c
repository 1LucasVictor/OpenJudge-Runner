#include <stdio.h>

int main(void) {
	int k,a,b;
	scanf("%i %i %i",&k,&a,&b);
	if(!(a%k) && !(b%k)) puts("OK");
	else if((a/k)<(b/k)) puts("OK");
	else puts("NG");
	return 0;
}
