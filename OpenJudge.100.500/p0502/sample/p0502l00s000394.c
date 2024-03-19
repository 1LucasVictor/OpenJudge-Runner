#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int i;
    for(i=0; i<N; i++) {
        int temp;
        scanf("%d", &temp);
        if(temp % 2 == 0) {
            if((temp % 3 != 0) && (temp % 5 != 0)) {
                printf("DENIED\n");
                return 0;
            }
        }
    }
    printf("APPROVED\n");
}