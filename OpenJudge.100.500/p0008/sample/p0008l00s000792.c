#include<stdio.h>

const int MAX_V = 100000;
int prime[100001];

int main(){
	int n;
	for(int i = 2;i <= MAX_V;i++){
		prime[i] = 1;
	}
	for(int i = 2; i * i <= MAX_V;i++){
		if(prime[i]){
			for(int k = 2 * i;k <= MAX_V; k += i){
				prime[k] = 0;
			}
		}
	}
	while(scanf("%d", &n) != EOF){
		if(n == 0) break;
		int count = 0;
		for(int i = 0;i <= n;i++){
			if(prime[i]){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}