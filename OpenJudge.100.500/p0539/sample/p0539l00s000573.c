#include <stdio.h>

int main(void){
    int N, i, j, b;
    scanf("%d", &N);
    b=0;
    for (i=1; i<=9; i++) {
        for (j=1; j<=9; j++) {
            if (N==i*j) {
                b=1;
                break;
            }
        }
        if (b==1) break;
    }
    if (b==1) printf("Yes");
    else printf("No");
    return 0;
}
