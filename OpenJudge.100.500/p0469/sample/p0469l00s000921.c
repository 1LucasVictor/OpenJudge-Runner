#include <stdio.h>
int main(void){
	int k;
	int a, b;
	scanf("%d", &k);
	scanf("%d", &a);
	scanf("%d", &b);
	if(a%k != 0 && b%k != 0 && (b-a) < k){
		printf("NG\n");
	}
	else {
		printf("OK\n");
	}
	return 0;
}