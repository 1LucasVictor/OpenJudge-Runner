#include<stdio.h>
#include<stdlib.h>

void initilize(int a[9][9]){
	int i, j;
	for(i = 0; i < 9; i++){
		for(j = 0; j < 9; j++){
			a[ i ][ j ] = ( i + 1 )*( j + 1 );
		}
	}
}

void takahashi(int a[9][9], int N){
	int i, j;
	for(i = 0; i < 9; i ++){
		for(j = 0; j < 9; j++){
			if(a[ i ][ j ] == N){
				printf("Yes\n");
				exit(1);
			}
		}
	}
	printf("No\n");
}

int main(){
	int a[9][9];
	initilize(a);
	int N;
	scanf("%d", &N);
	takahashi(a, N);
	return 0;
}