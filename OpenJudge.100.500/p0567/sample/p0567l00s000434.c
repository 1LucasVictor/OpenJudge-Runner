#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void) {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int d=C-(A-B);
    if (d>=0) printf("%d",d);
    else printf("0");

return EXIT_SUCCESS;
}
