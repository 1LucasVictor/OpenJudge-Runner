#include <stdio.h>
int main(void) {
    int num,array[100],i;
    scanf("%d",&num);
    for (i=0; i<num; i++) scanf("%d",&array[i]);
    for (i=0; i<num; i++) {
        if (i) printf(" ");
        printf("%d",array[num-i-1]);
    }
    printf("\n");
    return 0;
}