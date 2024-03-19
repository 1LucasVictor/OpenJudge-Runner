#include <stdio.h>

int main(){

    int A, B, K;
    int i = 0;
    scanf("%d", &K);
    scanf("%d", &A);
    scanf("%d", &B);

    while(1){
        if(A<=K*i && B>=K*i){
            printf("OK");
            break;
        }else{
            if(B<K*i){
                printf("NG");
                break;
            }else{
                i++;
            }
        }
    }

    return 0;
}