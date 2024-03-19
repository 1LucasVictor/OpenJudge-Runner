#include<stdio.h>
int arr[1000020];
long long i, j;
void sieve() {
	//puts("sieve");
	int count = 0;
	//puts("declare");
	for(i=2; i<1000020; i++) {
		//printf("loop %lld\n", i);
		if(arr[i] == -1) continue;
		if(arr[i] == 0) arr[i] = ++count;
		for(j=i*i; j<1000020; j+=i) {
			//printf("%d ", j);
			arr[j] = -1;
		}
	}
	//puts("SIEVE_END");
}

int main() {
	//puts("MAIN1");
	sieve();
	//puts("MAIN2");
	int n;
	while(scanf("%d", &n) != EOF) {
		while(1) {
			if(arr[n] == -1) {
				n--;
				continue;
			}
			printf("%d\n", arr[n]);
			break;
		}
	}
	return 0;
}