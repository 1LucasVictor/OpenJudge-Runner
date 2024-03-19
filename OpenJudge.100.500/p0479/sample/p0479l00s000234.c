#include<stdio.h>

int main(void){

    int N;
    int FRAG[200000+1] = {0};
    int n,i;

    scanf("%d", &N);

    for( i = 1; i <= N-1; i++ ){
        scanf("%d", &n);
        FRAG[n] += 1;
    }

    for( i = 1; i <= N; i++ ){
        printf("%d\n", FRAG[i]);
    }

    return 0;
}
        
