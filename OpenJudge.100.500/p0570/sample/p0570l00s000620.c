#include<stdio.h>
#include<stdlib.h>

int main(void){
    int A, B;
    int btm, top;
    /* 入力 */
    scanf("%d%d", &A, &B);
    
    if(A <= B){
        btm = A;top = B;
    }else{
        btm = B;top = A;
    }
    /* 判定 */
    for(int i = btm; i <= top; i++){
        if( abs(A-i) == abs(B-i) && A != B ){
            printf("%d", i);
            return 0;
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;
}