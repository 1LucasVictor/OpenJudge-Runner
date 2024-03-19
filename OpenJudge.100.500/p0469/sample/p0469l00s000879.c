#include <stdio.h>
#include <stdbool.h>

int main(void){
	unsigned int k, a, b, i;
	bool res = false;
	scanf("%d", &k);
	printf("");
	scanf("%d %d", &a, &b);
	if(k > 1000 && a > 1000 && b > 1000) return 0;
	i = a;
	do{
		if(i % k == 0) res = true;
	}while(i++ < b);
	if(res) printf("OK\n");
	else printf("NG\n");
	return 0;
}