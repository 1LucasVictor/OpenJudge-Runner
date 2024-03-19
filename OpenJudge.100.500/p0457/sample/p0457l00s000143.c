#include <stdio.h>
#include <string.h>
long int i,j,N,M,K;
long sum=0,cnt=0,tmp_a=0,tmp_b=0;
long A[200200],B[200200];
int cmp(long tmp_a2,long tmp_b2,int eq){
	
	if(A[tmp_a2]==B[tmp_b2] || eq==1){
		if(tmp_a2+1<N && tmp_b2+1<M)
				cmp(tmp_a2+1,tmp_b2+1,1);
				return 0;
	}
	
		if(A[tmp_a2]>B[tmp_b2]){
			if(sum+B[tmp_b]<K){
				sum+=B[tmp_b++];
				cnt++;
			}
		}
	    else if(A[tmp_a2]<B[tmp_b2]){
			if(sum+A[tmp_a]<K){
				sum+=A[tmp_a++];
				cnt++;
			}
		}
			
	 
	return 0;
}
int main(){
	
	
	
	scanf("%ld%ld%ld",&N,&M,&K);
	
	for(i=0;i<N;i++){
		scanf("%ld",A+i);
	}
	for(i=0;i<M;i++){
		scanf("%ld",B+i);
	}	
	long all=0;
	while(sum<=K && all<N+M){
		
		cmp(tmp_a,tmp_b,0);
		all++;
	}
		
	printf("%ld\n",cnt);
	return 0;
}
