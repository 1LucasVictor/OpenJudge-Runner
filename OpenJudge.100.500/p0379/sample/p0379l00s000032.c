#include <stdio.h>

#define N 101
#define M 101

int calc(int a[][M], int b[], int n, int m);

int main(){
	
	int n, m;
	int a[N][M];
	int b[M];
	int c[N];
	int i, i1, i2;
	
	scanf("%d %d", &n, &m);
	for(i1 = 0; i1 < n; i1++){
		for(i2 = 0; i2 < m; i2++){
			scanf("%d", &a[i1][i2]);
		}
	}
	
	for(i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	
	for(i = 0; i < n; i++){
		c[i] = calc(a, b, i, m);
		printf("%d\n", c[i]);
	}
	
	return 0;
	
}

int calc(int a[][M], int b[], int n, int m){
	
	int i;
	int ret = 0;
	
	for(i = 0; i < m; i++){
		
		ret += (a[n][i] * b[i]);
		
	}
	
	return ret;
	
}