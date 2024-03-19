#include<stdio.h>
    int main(){
        int A, B;
            scanf("%d %d", &A, &B);
        if(1 <= A, B <= 9){
            //if(1 <= B <= 9){
                printf("%d", A * B);
            //}else{printf("-1");}
        }else{printf("-1");}
    return 0;
    }