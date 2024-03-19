#include <stdio.h>

int main(){
	int x, a, b;
	scanf("%d%d%d", &x, &a, &b);
	
	if(a - b >= 0){
		printf("delicious\n");
	}else if(a - b < 0 && b - a < x + 1){
		printf("safe\n");
	}else{
		printf("dangerous\n");
	}
}