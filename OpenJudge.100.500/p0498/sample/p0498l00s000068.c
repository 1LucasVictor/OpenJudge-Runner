#include<stdio.h>

int main() {
    int N, ans;
    scanf("%d", &N);

    int flag = N % 2;

    if(flag == 1) {
        ans = N / 2 + 1;
    } else {
        ans = N / 2;
    }

    printf("%d", ans);

}