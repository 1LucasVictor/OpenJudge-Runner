#include <stdio.h>

int main(void){
    int N, A, i;
    int buka[200000];

    scanf("%d", &N);
    for(i=0; i<N-1; i++){
        scanf("%d", &A);
        buka[A-1]++;
    }

    for(i=0; i<N; i++)
        printf("%d\n", buka[i]);

    return 0;
}
