#include <stdio.h>
#define Boolean int
#define TRUE 1
#define FALSE 0

Boolean prime(int n){
	int i;
	if(n == 2){
		return TRUE;
	}
	if(n % 2 == 0){
		return FALSE;
	}
	for(i = 3;i < n;i+=2){
		if(n % i == 0){
			return FALSE;
		}
	}
	return TRUE;
}

int main(void){
	int N,n,cnt = 0;

	scanf("%d", &N);

	while(N--){
		scanf("%d", &n);
		if(prime(n)){
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}