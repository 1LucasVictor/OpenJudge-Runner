#include <stdio.h>

int main(){
	int i, N, A[1000];
	int flag = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	for(i = 0; i < N; i++){
		if(A[i] != 0 && A[i] % 3 == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		for(i = 0; i < N; i++){
			if(A[i] != 0 && A[i] % 5 == 0){
				flag = 2;
				break;
			}
		}
	}
	if(flag == 2) printf("APPROVED");
	else printf("DENIED");
	return 0;
}