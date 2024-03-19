#include<stdio.h>

int main(){
    int N, K, x, y;

    scanf("%d %d", &N, &K);

    x=abs(N-K);
    y=abs(x-K);

    printf("%d\n", y);

return 0;

}
