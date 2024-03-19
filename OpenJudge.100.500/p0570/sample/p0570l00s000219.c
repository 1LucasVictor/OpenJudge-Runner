#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int d(int a){
    if(a >= 0){
        return a;
    }else{
        return -a;
    }
}

int main(){
    int A, B, tmp, K,flag=0;
    scanf("%d %d", &A, &B);
    if(A % 2 == 1 && B % 2 == 0)flag = 1;
    if(A % 2 == 0 && B % 2 == 1)flag = 1;

    if(flag == 0){
        if(A > B){
            tmp = (A - B) / 2;
            K = A - tmp;
        }else{
            tmp = (B - A) / 2;
            K = B - tmp;
        }
    }

    if(flag == 1){
        printf("IMPOSSIBLE\n");
    }else{
        printf("%d\n",K);
    }
}