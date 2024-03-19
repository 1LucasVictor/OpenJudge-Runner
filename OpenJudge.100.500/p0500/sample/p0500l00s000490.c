#include <stdio.h>
#include <math.h>
int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);
    //printf("%d %d\n", N, M);
    int a[2][M], z[N];
	for(int i=0; i<N; i++) z[i] = -1;
    for(int i=0; i<M; i++)
        scanf("%d %d", &a[0][i], &a[1][i]);
    //for(int i=0; i<M; i++) printf("%d %d\n", a[0][i], a[1][i]);
    for(int i=0; i<M; i++)
    	if(z[a[0][i]-1] > -1){
        	if(z[a[0][i]-1] != a[1][i]){ printf("-1\n"); return 0; }
    	}
  		else
        	z[a[0][i]-1] = a[1][i];
	//for(int i=0; i<N; i++) printf("%d", z[i]);
    if(z[0] == 0 && N > 1){ printf("-1\n"); return 0; }
    if(z[0] == -1 && N > 1) z[0] = 1;
	else if(N == 1) z[0] = 0;
	if(z[1] == -1) z[1] = 0;
	if(z[2] == -1) z[2] = 0;
	for(int i=0; i<N; i++)
		printf("%d", z[i]);
	printf("\n");
    return 0;
}