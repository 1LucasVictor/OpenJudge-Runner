#include<stdio.h>

int main(){
    int A,B,C;
    int ans;

    scanf("%d %d %d", &A, &B, &C);

    ans = C-(A-B);
    if(ans>0){
        printf("%d", ans);
    }else{
        printf("0");
    }

    return 0;
}