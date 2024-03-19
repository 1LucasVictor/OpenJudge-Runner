#include<stdio.h>
#include<stdbool.h>

int main(){
	long long int N,K,ans=0,bef=0,min=0;
  	scanf("%d %d",&N,&K);
    bool f=true;
  	long long int a=abs(K-N);
  
  	if(N <= a){
      ans = N;
    }else{
	  	while(f){
    		a = abs(N-K);
     	 	if(N > a){
                N = a;
            }else{
            	ans = N;
              	f = false;
            }
    	}
    }
	printf("%d",ans);
	return 0;
}