#include <stdio.h>

int main(int argc, const char * argv[]){

	int x, i;
	int n;

	scanf("%d", &x);

	for(i=1; i<=x; i++) {
		if(i%3 == 0) printf(" %d", i);

		else{
			n = i;

		while(n % 10 != 3 && n) {
			n /= 10;
		}

		if(n){
			printf(" %d", i);
		}
		}
	}
	printf("\n");

	return 0;
}