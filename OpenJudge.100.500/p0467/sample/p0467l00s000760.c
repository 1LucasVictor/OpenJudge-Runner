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
    
    int a,b,c;
    if(K>A){
        a = A;
    }else{
    	a = K;
    }

    K = K-A;
    res = 1*a;
    
    if(K>0){
       K = K-B;
       res = res + 0*K;
       

    }
    if(K>0){
    	
    	minus = K*-1;
    }
    

    res = res + minus;

    	
   	printf("%d\n",res);

    return 0;

}