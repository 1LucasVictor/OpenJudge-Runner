#include<stdio.h>
    int main(){
        int A, B;
            scanf("%d %d", &A, &B);
        if(1 <= A <= 9 && 1 <= B <= 9){
                printf("%d", A * B);
        }
            else{
                printf("%d", -1);
            }
    return 0;
    }
