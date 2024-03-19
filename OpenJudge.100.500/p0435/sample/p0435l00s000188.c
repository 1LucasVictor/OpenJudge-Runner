#include <stdio.h>
#include <math.h>

int main(void){
    long N, D, a[2];
    int cnt = 0, i;

    scanf("%ld %ld", &N, &D);

    for(i = 0; i < N; i++){
        scanf("%ld %ld", &a[0], &a[1]);
        if(D >= sqrt(a[0] * a[0] + a[1] * a[1]))
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}