#include <stdio.h>
#define MAX 1000000
int main(){
	int n, i, j, ans = 0, prime[MAX];
	prime[0] = 0; prime[1] = 0;
	for (i = 2;i < MAX;i++) prime[i] = 1;
	for (i = 2;i < MAX;i++){
		if(prime[i] == 1){
			ans++;
			if(i < 1000) for (j = i * i;j < MAX;j += i) prime[j] = 0;
		}
		prime[i] = ans;
	}
	
	while (scanf("%d", &n) != EOF) printf("%d\n", prime[n]);
	return 0;
}