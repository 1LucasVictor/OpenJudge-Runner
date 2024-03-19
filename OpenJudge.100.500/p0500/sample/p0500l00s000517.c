#include <stdio.h>
#include <math.h>

int po10(int x){
	return (int)pow(10,x);
}

int main(void){
	int N,M;
  	scanf("%d %d",&N,&M);
  	int s[M],c[M],re[N],flg[N];
  	for(int i=0;i<N;i++){
  		re[i]=0;
    	flg[i]=0;
  	}
  	for(int i=0;i<M;i++){
  		scanf("%d %d",&s[i],&c[i]);
  		if(flg[s[i]-1]==0){
    		re[s[i]-1]=c[i];
    		flg[s[i]-1]=1;
    	}else if(re[s[i]-1]!=c[i]){
      		printf("-1");
        	return 0;
    	}
  	}
  	if(re[0]==0){
      	if(flg[0]==1){
      		printf("-1");
      		return 0;
    	}else{
        	re[0]=1;
        }
    }
  	int result=0;
  	for(int i=0;i<N;i++){
  		result+=re[N-i-1]*po10(i);
  	}
    printf("%d",result);
    return 0;
}