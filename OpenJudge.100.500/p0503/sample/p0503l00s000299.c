#include<stdio.h>
int main() {
	int N, A[100], flag;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	for (int i = 0; i < N; i++) {
		for (int k = 1; k < N; k++) {
			if (A[i] == A[k]) {
				flag = 0;
				break;
			}
			else {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return(0);
}