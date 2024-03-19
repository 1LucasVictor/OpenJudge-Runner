#include <stdio.h>

int main(void){
	int n[101][101] = {}, m[101] = {},l[101] = {}, i, j, a, b;
	scanf("%d %d", &a, &b);
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			scanf("%d", &n[i][j]);
		}
	}
	for(i = 0; i < b; i++){
		scanf("%d", &m[i]);
	}
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			l[i] += n[i][j] * m[j];
		}
	}
	for(i = 0; i < a; i++){
		printf("%d\n", l[i]);
	}
	return 0;
}