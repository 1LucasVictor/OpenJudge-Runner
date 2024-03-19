#include <stdio.h>

void call(int n){
	int i = 1;
	do{
		int x = i;
		if ( x % 3 == 0 ){
			printf(" %d", i);
			continue;
		}
		while(1){
			if ( x % 10 == 3 ){
				printf(" %d", i);
				break;
			}
			x /= 10;
			if (!x) break;
		}
	}while( ++i <= n );
	puts("");
}
int main(){
	int n;
	scanf("%d", &n);
	call(n);
	return 0;
}