#include<stdio.h>
#include<stdlib.h>

#define MSX_WEIGHT 100000

int **mat;
int *d;
int n;

void SSSP();
int Search(int*,int*);
int Test_Set(int*);

int main(void){
	int i,j;
	int in_u,in_k,in_v,in_wei;

	scanf("%d",&n);

	d=(int*)malloc(sizeof(int)*n);

	mat=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++) mat[i]=malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++) mat[i][j]=MSX_WEIGHT+1;
	}

	for(i=0;i<n;i++){
		scanf("%d",&in_u);
		scanf("%d",&in_k);
		for(j=0;j<in_k;j++){
			scanf("%d",&in_v);
			scanf("%d",&in_wei);
			mat[in_u][in_v]=in_wei;
		}
	}

	SSSP();

	for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);

	free(d);
	for(i=0;i<n;i++) free(mat[i]);
	free(mat);

	return 0;
}

void SSSP(){
	int s,u;
	int i;
	int S[n];

	for(i=0;i<n;i++){
		S[i]=0;
		d[i]=MSX_WEIGHT+1;
	}
	s=0;
	d[s]=0;

	while(Test_Set(S)==0){
		u=Search(d,S);
		S[u]=1;

		for(i=0;i<n;i++){
			if(S[i]==1) continue;
			if(d[u]+mat[u][i] < d[i]) d[i]=d[u]+mat[u][i];
		}
	}

}

int Search(int *d,int *S){
	int i;
	int min=MSX_WEIGHT+1;
	int u;

	for(i=0;i<n;i++){
		if(S[i]==1) continue;
		
		if(d[i]<min){
			min=d[i];
			u=i;
		}
	}

	return u;
}

int Test_Set(int *S){
	int i;

	for(i=0;i<n;i++){
		if(S[i]==0) return 0;
	}	
	return 1;
}