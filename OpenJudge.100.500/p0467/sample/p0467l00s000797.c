#include <stdio.h>
int main(void){
	long a, b, c, k;
	scanf("%ld", &a);
	scanf("%ld", &b);
	scanf("%ld", &c);
	scanf("%ld", &k);
	if(k <= a){
		printf("%ld\n", k);
	}
	else if(k <= a+b){
		printf("%ld\n", a);
	}
	else{
		printf("%ld\n", 2*a+b-k);
	}
	return 0;
}