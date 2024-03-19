#include <stdio.h>
#include <stdio.h>
#define N 8
#define FREE 1
#define NOT_FREE 0

int   A[N][N];
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

void print(){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(A[i][j]){
				if(row[i]!=j)
					return ;
			}
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(row[i]==j)
				printf("Q");
			else
				printf(".");
		}
		printf("\n");
	}
}


void setqueen(int i){
	int j;
	if(i==N){
		print();
	return ;
    }
	for(j=0;j<N;j++){
		if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)
			continue;
		row[i]=j;
		col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
		setqueen(i+1);			
		row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
	}
}
int main(){
	int i,j,k,r,c;
	for(i=0;i<N;i++){
		row[i]=FREE;
		col[i]=FREE;
	}
	for(i=0;i<2*N-1;i++){
		dpos[i]=FREE;
		dneg[i]=FREE;
	}

	scanf("%d",&k);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			A[i][j]=NOT_FREE;
		}
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&r,&c);
		A[r][c]=FREE;
	}
	setqueen(0);

	return 0;
}

