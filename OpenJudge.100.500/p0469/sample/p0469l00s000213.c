#include <stdio.h>
void main(){
    int K, A, B;
    scanf("%d", &K);
    scanf("%d", &A); 
    scanf("%d", &B); 
    int i = K;
    while(1){
        if(A<=i){
            if(i<=B){
                printf("OK");
                return;
            }
        }
        if(B<i){
            printf("NG");
            return;
        }
        i+=K;
    }
}