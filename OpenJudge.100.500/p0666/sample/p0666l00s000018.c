#include <stdio.h>

int main(){
	int x,a,b;

	scanf("%d", &x);
	scanf("%d", &a);
	scanf("%d", &b);

	if(x + a >= b){
		if(a > b){
			if(a - b <= x){
				printf("delicious\n");
			}else{
				printf("safe\n");
			}
		}else{
			if(b - a >= x){
				printf("delicious\n");
			}else{
				printf("safe\n");
			}
		}
	}else{
		printf("dangerous\n");
	}

}