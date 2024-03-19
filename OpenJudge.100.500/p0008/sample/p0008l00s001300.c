#include<stdio.h>
#define N 1000000

int main(){
	
	static int prime[N];
	
	int i = 0, j = 0, k = 0, limit;
	
	for(i = 2; i < N; i++){
		prime[i] = 1;
		
	}
	
	prime[0] = prime[1] = 0;
	for (i = 2; i < N; i++){
		if(prime[i] == 1){
			for (j = i + i; j < N; j += i){
				prime[j] = 0;
			}
		}
	}
	while(scanf("%d", &limit) != EOF){
		k = 0;
		
		for(i = 2; i <= limit; i++){
		
			if(prime[i] == 1){
				k++;
			}
		}
	
		printf("%d\n", k);
	
	}
	return 0;
	
}