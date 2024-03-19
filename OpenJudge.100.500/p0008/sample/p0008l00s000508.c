#include <stdio.h>
#define MAX_N 1000000
int prime[MAX_N];
int is_prime[MAX_N + 1];

int main(){
	int p = 0;
	int n,i,j;

	while(scanf("%d",&n) != EOF){
		p=0;
		for(i=0; i<=n; i++){
			is_prime[i] = 1;
		}

		is_prime[0] = 0;
		is_prime[1] = 0;

		for(i=2; i<=n; i++){
			if(is_prime[i] == 1){
				p++;
				prime[p] = i;
				for(j=2*i; j<=n; j+=i){
					is_prime[j] = 0;
				}
			}
		}

		printf("%d\n",p);
	}
	
	return 0;
}