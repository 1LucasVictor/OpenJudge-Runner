#include <stdio.h>

int main(void) {

	int a,b,k;
	
	scanf("%d",&k);
	scanf("%d%d",&a,&b);
	if(b < a) {
    fprintf(stderr, "error: ill-formed fraction.\n");
    exit(1);
}
	if(b - a >= k){
		printf("OK");
	}else if(a > b || a <1 || k <1){
		printf("NG");
	}
	return 0;
}	