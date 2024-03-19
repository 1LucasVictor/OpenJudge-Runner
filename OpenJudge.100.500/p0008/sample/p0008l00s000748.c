#include <stdio.h>



const int MAX_V = 1000000;
int prime[1000001];
int sum[1000002];



int main(){
	int i, k, n;
	int num;
	sum[0] = 0;

	for (i = 2; i <= MAX_V; i++){
		prime[i] = 1;
	}

	for (i = 2; i*i <= MAX_V; i++){
		if (prime[i]){
			for (k = 2 * i; k <= MAX_V; k += i){
				prime[k] = 0;
			}
		}
	}


	for (i = 0; i <= MAX_V; i++){
		sum[i + 1] = sum[i] + prime[i];
	}


	while (scanf("%d", &num) != EOF){
		int cnt = sum[num + 1];
		printf("%d\n", cnt);
	}
	return 0;
}