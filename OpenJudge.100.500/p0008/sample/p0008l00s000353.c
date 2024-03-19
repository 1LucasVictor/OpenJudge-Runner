#include<stdio.h>

const int MAX_V = 999999;

int main(){
	int prime[MAX_V+1];
	int count[MAX_V+1];
	int i, k, n, sum = 0;
	for(i = 2;i <= MAX_V;i++) prime[i] = 1;
	for(i = 2; i * i <= MAX_V;i++){
		if(prime[i]){
			for(k = 2 * i;k <= MAX_V; k += i){
				prime[k] = 0;
			}
		}
	}
	for(i = 0;i < 2;i++){
		prime[i] = 0;
		count[i] = 0;
	}
	for(i = 2;i <= MAX_V;i++){
		if(prime[i]) sum++;
		count[i] = sum;
	}
	while(scanf("%d", &n) != EOF) printf("%d\n", count[n]);
	return 0;
}