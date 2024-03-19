#include <stdio.h>
	int main(void) {
		int a, b, x, r;
		scanf("%d %d %d", &x, &a, &b);
		if(a<1 || a>1000000000 || b<1 || b>1000000000 || x<1 || x>1000000000){
			return 1;
		}
		r = a-b;
		if(r>=0){
			printf("delicious");
		}
		else{
			if(-r<=x){
				printf("safe");
			}
			else{
				printf("dangerous");
			}
		}
	}