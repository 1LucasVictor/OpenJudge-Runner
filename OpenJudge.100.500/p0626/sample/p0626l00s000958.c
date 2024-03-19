
#include <stdio.h>
#include<string.h>
int main(){
  
    int D , N ; 
    scanf("%d%d",&D,&N);
	if(N==100){
    	printf("%d",pow(100,D)*(N+1));
    }else{
          if(D==0){
        printf("%d",N);
    }else if(D==1){
        printf("%d",100*N);
    }else if(D==2){
        printf("%d",10000*N);
    }
    }
}