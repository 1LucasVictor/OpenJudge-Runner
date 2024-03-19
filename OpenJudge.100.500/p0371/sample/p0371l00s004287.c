#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, n, t, min = 1000000, max = -1000000;
    long int sum = 0;
    scanf("%d", &n);
    for(t = 0;t < n;t++){
        scanf("%d", &a);
        sum += a;
        if(min > a)
            min = a;
        if(max < a)
            max = a;
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}

