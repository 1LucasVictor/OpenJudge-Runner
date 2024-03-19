#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int L, R;
    int min;
    
    scanf("%d %d", &L, &R);

    for (int i=L;i<L+2019&&i<R;i++) {
        for (int j=i+1;j<L+2020&&j<=R;j++) {
            if ((i*j)%2019 < min) {
                min = (i*j)%2019;
            }
        }
    }

    printf("%d\n", min);
    return 0;
}