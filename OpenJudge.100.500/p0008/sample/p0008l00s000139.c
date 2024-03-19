#include<stdio.h>

const int MAX_V = 100000;

int main(){
	int prime[100001];
	int count[100001];
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
	for(i = 0;i < 2;i++){
		prime[i] = 0;
		count[i] = 0;
	}
	for(i = 2;i <= 100001;i++){
		if(prime[i]) sum++;
		count[i] = sum;
	}
	while(scanf("%d", &n) != EOF){
		printf("%d\n", count[n]);
	}
	return 0;
}