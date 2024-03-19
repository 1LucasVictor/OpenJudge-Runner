#include <stdio.h>
#include<stdlib.h>

int main(void) {

	int a,b,k;
	
	if(scanf("%d", &k) < 1) {
    fprintf(stderr, "error: ill-formed fraction.\n");
    exit(1);
}
	if(scanf("%d%d", &a,&b) < 2) {
    fprintf(stderr, "error: ill-formed fraction.\n");
    exit(1);
}
	
	if(b - a >= k || k == 1){
		printf("OK");
	}else if(b < a || a < 1 || k < 1||b > 1000 || k > 1000){
		printf("NG");
	}else{
		printf("NG");
	}
	return 0;
}	
