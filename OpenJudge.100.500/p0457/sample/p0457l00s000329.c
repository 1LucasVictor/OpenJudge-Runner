#include<stdio.h>
#include <stdlib.h>

int main(void){
	int N,M,K;
	long int *A,*B;
	int i,j,sum=0,max=0,start;
	scanf("%d %d %d",&N,&M,&K);
	N++;	//ここで先に多めにとってるよ
	M++;	//ここで先に多めにとってるよ
	A = malloc((N) * sizeof(long int));
	B = malloc((M) * sizeof(long int));
	A[0] = 0;
	B[0] = 0;
	for(i=1;i<N;i++) scanf("%ld",&(A[i]));
	for(i=1;i<M;i++) scanf("%ld",&(B[i]));
	for(i=1;i<N;i++) A[i] += A[i-1];
//	for(i=0;i<N;i++) printf("A[%d] = %ld\n",i,A[i]);//
	for(i=1;i<M;i++) B[i] += B[i-1];
//	for(i=0;i<M;i++) printf("B[%d] = %ld\n",i,B[i]);//
	for(i=0;i<N;i++){
		if(max<i){
			start = 0;
		}else{
			start = max-i;
		}
		for(j=start;j<M;j++){
			if(A[i]+B[j] <= K){
				if((i+j) > max) max = i+j;
			}else{
				break;
			}

		}
	}
	printf("%d\n",max);

	free(A);
	free(B);
	return 0;
}