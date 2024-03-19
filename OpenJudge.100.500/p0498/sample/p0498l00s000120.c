#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int ans;
    if( N % 2 == 0 ){
        ans = N / 2;
    }
    else{
        ans = N / 2 + 1;
    }

    printf("%d\n", ans);

    return 0;
}


