#include <stdio.h>

int main(void) {
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if ( C-(A-B) < 0 ) {
        printf("%d\n",0);
    }
    else {
        printf("%d\n",C-(A-B)); 
    }
    return 0;
}