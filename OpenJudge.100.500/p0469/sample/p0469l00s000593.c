#include <stdio.h>
#include <stdbool.h>

int main(void){
	int k, a, b, i;
	bool res = false;
	scanf("%d", &k);
	printf("");
	scanf("%d %d", &a, &b);
	i = a;
	do{
		if(i % k == 0) res = true;
		i++;
	}while(i < b);
	if(res) printf("OK\n");
	else printf("NG\n");
	return 0;
}