#include <stdio.h>

int main(){
	int i;
  	int ans;
  	int A, B, C, K;
  
  	scanf("%d%d%d%d", &A, &B, &C, &K);
  
  	ans = 0;
  	for(i=0; i<K; i++){
    	if(A > 0){
          	ans += 1;
        	A--;
        }else if(B > 0){
        	B--;
        }else if(C > 0){
        	ans += -1;
          	C--;
        }else{
        	//ありえない
        }
    }
  
  	printf("%d\n", ans);
  
  	return 0;
}