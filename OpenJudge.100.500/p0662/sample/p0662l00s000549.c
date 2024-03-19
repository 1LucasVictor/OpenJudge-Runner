#include <stdio.h>

int main(){

	int a, b, c, d;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if (b < c){
		printf("0\n");
	} else if(b <= d){
		printf("%d\n", b-c);
	} else if (b > d && a < c) {
		printf("%d\n", d-c);
	} else {
		printf("%d\n", d-a);
	}


	return 0;
}
