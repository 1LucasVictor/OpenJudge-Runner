#include <stdio.h>

int main(void){
    int n = 0,
        a = 0,
        maximum = -1000000,
        minimum = 1000000;
    long sum = 0;
    
    scanf("%d", &n);
    
    while(scanf("%d", &a) != EOF){
        sum += a;
        if ( a >= maximum ) {
            maximum = a;
        }
        if ( a <= minimum ) {
            minimum = a;
        }
    }
    
    printf("%d %d %ld\n", minimum, maximum, sum);
}