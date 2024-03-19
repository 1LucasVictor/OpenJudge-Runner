#include <stdio.h>
#define N 8
#define MAX 10000

int cc(int y, int x);
void printBoard();
int recursive(int d);

int a[N][N];

int main(){
	int n, i, j, x, y;
	int d = 0;
	
	scanf("%d", &n);
	for( i = 0; i < n; i++) {
		scanf("%d %d",&y,&x);
		
		a[y][x]=1;
	}
	
	i = recursive(d);
	return 0;
}


void printBoard() { 
	int i, j;
	for( i = 0; i < N; i++ ){
		for( j = 0; j < N; j++ ){
			if( a[i][j]==1) {
				printf("Q");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}	
}


int cc(int y, int x) {
	int i, j;
	
	for(i = 0; i < N; i++ ) {
		if(i != y && a[i][x] == 1)return 0;
	}
	
	for( i = 0; i < N; i++ ) {
		if( i != x && a[y][i] ==1 )return 0;
	}

	
	
	j = x +1 ;
	i= y - 1; 
	while(i >= 0 && j < N){
		if( a[i--][j++] ==1) return 0;
	}
	
	
	 j = x - 1;
	 i = y - 1;
	while(i >= 0 && j >= 0){
		if(a[i--][j--]==1)return 0;
	}
	
	
	 j = x + 1;
	 i = y + 1;
	while( i < N &&  j < N)  {
		if( a[i++][j++] ==1)return 0;
	}

	
	
	 j = x - 1;
	 i = y + 1;
	while( i < N && j >= 0){
		if(a[i++][j--]==1)return 0;
	}
	
	return 5;
}


int recursive(int d) {
	int i;
	
	for(i=0;i<N;i++){
		if(a[d][i]==1){
			if(!recursive(d+1))return 0;
		}
	}
	

	if(d == N){
		printBoard();
		return 1;
	} else {
		for(i = 0; i < N; i++ ) {
			if(a[d][i] == 0 && cc(d, i) == 5){
				a[d][i]=1;
				if( !recursive(d+1) ){
					a[d][i]=0;
				}
			}
		}
	}
	
	
	return 0;

}



