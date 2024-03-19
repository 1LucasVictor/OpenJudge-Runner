#include<stdio.h>
#include<stdlib.h>

#define MAX_WEIGHT 2000

int **mat;
int *d;
int n;

void MST();
int Search(int*,int*);
int Test_Set(int*);

int main(void){
	int i,j;
	int sum=0;

	scanf("%d",&n);

	d=(int*)malloc(sizeof(int)*n);

	mat=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++) mat[i]=malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d",&mat[i][j]);
	}

	MST(n);

	for(i=0;i<n;i++) sum+=d[i];
	printf("%d\n",sum);

	free(d);
	for(i=0;i<n;i++) free(mat[i]);
	free(mat);

	return 0;
}

void MST(){
	int r,u;
	int i;
	int A[n];

	for(i=0;i<n;i++){
		A[i]=0;
		d[i]=MAX_WEIGHT+1;
	}
	r=0;
	d[r]=0;

	while(Test_Set(A)==0){
		u=Search(d,A);
		A[u]=1;

		for(i=0;i<n;i++){
			if(A[i]==1 || mat[u][i]==-1) continue;
			if(mat[u][i]<d[i]) d[i]=mat[u][i];
		}
	}

}

int Search(int *d,int *A){
	int i;
	int min=MAX_WEIGHT+1;
	int u;

	for(i=0;i<n;i++){
		if(A[i]==1) continue;
		
		if(d[i]<min){
			min=d[i];
			u=i;
		}
	}

	return u;
}

int Test_Set(int *A){
	int i;

	for(i=0;i<n;i++){
		if(A[i]==0) return 0;
	}	
	return 1;
}