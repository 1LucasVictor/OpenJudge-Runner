#include<stdio.h>
int main(){
	long long int N,K,ans=0;
  	scanf("%lld %lld",&N,&K);
  	long long int a=0;
  	int c=1;
  	a = abs(K-N);
  	if(N <= a){
      ans = N;
      c=0;
    }
	 while(c){
       		a = abs(N-K);
            if(N < a){
            	ans = N;
              	c = 0;
            }
          	N=a;
    }
	printf("%lld",ans);
	return 0;
}