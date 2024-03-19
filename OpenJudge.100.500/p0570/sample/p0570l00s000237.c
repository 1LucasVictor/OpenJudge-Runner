#include<stdio.h>
#include<stdlib.h>
int main (void){
    int A;
    int B;
    int K;

    scanf("%d %d",&A,&B);
    for(K=0;K<1000000000;K++){
        if(abs(A-K) == abs(B-K)){
            printf("%d\n",K);
        }else{

        }
    }
return 0;
}
