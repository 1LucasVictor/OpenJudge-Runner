#include <stdio.h>
int main(){
    int A,B,C,K;
    scanf("%d %d %d %d",&A,&B,&C,&K);
//    printf("%d %d %d %d",A,B,C,K);
    if(K<=A){
        printf("%d",K);
    }
    else if((A<K)&&(K<=A+B)){
        printf("%d",A);
    }
    else if((A+B<K)&&(K<=A+B+C)){
        printf("%d",A-(K-(A+B)));
    }

    
}