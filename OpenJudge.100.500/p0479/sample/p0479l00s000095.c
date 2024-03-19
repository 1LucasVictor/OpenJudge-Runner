#include <stdio.h>

int main(void){
	int N, i;
	scanf("%d", &N);
	int A[N], cnt[N];
	for (i = 0; i <= N; i++){
		cnt[i] = 0;
	}
	for (i = 2; i <= N; i++){
		scanf("%d", &A[i]);
	}
	for (i = 2; i <= N; i++){
		cnt[A[i]]++;
	}
	for (i = 1; i <= N; i++){
		printf("%d\n", cnt[i]);
	}
}