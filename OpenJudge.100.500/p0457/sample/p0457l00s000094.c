#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define rep(i,k,n) for(int (i)=(k);(i)<(n);(i)++)
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(a) ((a)>0 ?(a):-(a))
#define llong long long

int main(){
	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);
	int A[N],B[M];
	rep(i,0,N) scanf("%d",A+i);
	rep(i,0,M) scanf("%d",B+i);
	int n=0,m=0;
	int sum=0;
	int num=0;
	int max=0;
	
	for(;n<N;n++){
		if( sum+A[n] <= K ){
			sum += A[n];
		}else{
			n--;
			break;
		}
	}
	max = num = n+1;
	
	while( m<M ){
		if( sum+B[m] <= K ){
			sum += B[m];
			m++; num++;
			max = max(max,num);
		}else{
			if(n<0) break;
			sum -= A[n];
			n--; num--;
		}
	}
	printf("%d",max);
	return 0;
}
