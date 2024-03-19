#include <stdio.h>

int main(){
	int i, N, A[1000];
	int flag = 1;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	for(i = 0; i < N; i++){
		if(A[i] % 2 != 0) A[i] = -1;
	}
	for(i = 0; i < N; i++){
		if(A[i] != -1 && A[i] % 3 != 0 && A[i] % 5 != 0) flag = 0;
	}
	if(flag == 1) printf("APPROVED");
	else printf("DENIED");
	return 0;
}