#include<stdio.h>

const int MAX_V = 100000;

int main(){
	int prime[MAX_V+1];
	int count[MAX_V+1];
	int i, n, sum = 0;
	for(i = 2;i <= MAX_V;i++){
		prime[i] = 1;
	}
	for(i = 2; i * i <= MAX_V;i++){
		if(prime[i]){
			for(int k = 2 * i;k <= MAX_V; k += i){
				prime[k] = 0;
			}
		}
	}
	prime[0] = 0;
	prime[1] = 0;
	count[0] = 0;
	count[1] = 0;
	for(i = 2;i < MAX_V;i++){
		if(prime[i]) sum++;
		count[i] = sum;
	}
	while(scanf("%d", &n) != EOF){
		printf("%d\n", count[n]);
	}
	return 0;
}