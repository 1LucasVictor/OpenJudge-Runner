#include <stdio.h>
const int MAX_V = 1000000;
int prime[MAX_V + 1];
int main(){
	//?´???°??¨??????
	int i, k;
	for( i = 2; i <= MAX_V; i++) {
		prime[i] = 1;
	}
	for( i = 2; i * i <= MAX_V; i++){
		if(prime[i]) {
			for( k = 2 * i; k <= MAX_V; k += i){
				prime[k] = 0;
			}
		}
	}
	//?´???????????±???????
	int sum[MAX_V + 2];
	sum[2] = 0;
	for( i = 2; i <= MAX_V; i++){
		sum[i + 1] = sum[i] + prime[i];
	}
	//??\?????¨??????
	int n;
	while(scanf("%d", &n) != EOF){
		printf("%d\n", sum[n + 1]);
	}
	return 0;
}