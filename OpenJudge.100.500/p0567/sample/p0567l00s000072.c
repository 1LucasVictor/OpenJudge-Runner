#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A, B, C, ANS;
    scanf("%d %d %d", &A, &B, &C);
    ANS = C-(A-B);
    if(ANS<0) printf("0\n");
    else printf("%d\n", ANS);
    return 0;
}
