#include<stdio.h>
#include<stdlib.h>
int main(){
	long long N, M, K, A[200200]={0}, B[200200]={0};
	scanf("%lld%lld%lld",&N,&M,&K);
	for(int i=0; i<N; i++){
		int a;
		scanf("%d",&a);
		A[i+1] = a + A[i];
	}
	for(int i=0; i<M; i++){
		int b;
		scanf("%d",&b);
		B[i+1] = b + B[i];
	}
	int ans = 0;
	for(int i=0; i<=N; i++){
		int l=-1, r=M+1;
		while(abs(l-r) > 1){
			int mid = (l+r)/2;
			if(A[i] + B[mid] > K)r = mid;
			else l = mid;
		}
		if(A[i] + B[l] <= K)ans = ans>(i+l)?ans:(i+l);
	}
	printf("%d\n",ans);
	return 0;
}