#include <stdio.h>
#define N 100

int size[N], m[N][N], count[N][N], d[N], n;

void DFS(int, int);

int main(){
	int i, j, a;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a);
		scanf("%d", &size[a]);
		
		for(j = 0; j < size[a]; j++){
			scanf("%d", &m[a][j]);
			scanf("%d", &count[a][j]);
		}
	}
	for(i = 0; i < n; i++)
		d[i] = 1000000;
	
	DFS(0, 0);
	
	for(i = 0; i < n; i++)
		printf("%d %d\n", i, d[i]);
	
	return 0;
}

void DFS(int a, int b){
	int i;
	
	d[a] = b;
	
	for(i = 0; i < size[a]; i++){
		if(d[m[a][i]] > b + count[a][i])
			DFS(m[a][i], b + count[a][i]);
	}
}