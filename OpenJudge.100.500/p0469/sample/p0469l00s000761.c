#include <stdio.h>

int main(void){
	int k, a, b, ok = 0;
	scanf("%d", &k);
	scanf("%d", &a);
	scanf("%d", &b);
	
	for(; a <= b; a++){
		if(a % k == 0){
			printf("OK");
			ok = 1;
			break;
		}
	}
	if(ok==0)
		printf("NG");
	
	return 0;
}