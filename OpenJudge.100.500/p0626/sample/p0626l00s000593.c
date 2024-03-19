
#include <stdio.h>
#include<string.h>
int main(){
  
    int D , N ; 
    scanf("%d%d",&D,&N);
    if(D==0){
        printf("%d",N);
    }else if(D==1){
        printf("%d",100*N);
    }else if(D==2){
        printf("%d",10000*N);
    }
}