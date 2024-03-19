#include<stdio.h>

int main(void)
{
	int i, j, N;
	int maxv = 0;
	int R[200000] = {0};
	
	scanf("%d", &N);
	
	for(int I = 0; I < N; I++) {
        scanf("%d", &R[I]);
    }
	
	maxv = R[1] - R[0];
	
	for(j = 1; j <= N; j++) {
		for(i = 0; i <= j - 1; i++) {
			if(maxv < (R[j] - R[i])) {
				maxv = (R[j] - R[i]);
			}
		}
		maxv = (R[j] - R[i]) + maxv;
	}
	
	printf("%d\n", maxv);
	
	return 0;
	
}


