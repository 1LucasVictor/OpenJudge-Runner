#include <stdio.h>
#include <stdlib.h>

int main(){

    int A;
    int B;
    int C;
    int K;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&K);

    int res,minus=0;
    
    res = 1*A;
    K = K-A;
    if(K>0){
       K = K-B;
    }
    if(K>0){
    	minus = K*-1;
    }
    

    res = res + minus;

    	
   	printf("%d\n",res);

    return 0;

}