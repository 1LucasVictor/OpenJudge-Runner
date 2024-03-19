#include<stdio.h>

long fib(int n,int *memo,long *A){
	if(memo[n]==0){
		A[n]=fib(n-1,memo,A)+fib(n-2,memo,A);
		memo[n]=1;
	}
	return A[n];
}

main(){
	int i,n,memo[50];
	long A[50];
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		memo[i]=0;
	}
	A[0]=1;memo[0]=1;
	A[1]=1;memo[1]=1;
	printf("%ld\n",fib(n,memo,A));
}
	