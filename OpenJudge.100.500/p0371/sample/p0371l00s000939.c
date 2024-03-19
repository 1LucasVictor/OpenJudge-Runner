#include<stdio.h>
#include<math.h>

int main(void) {
    int n, ai, min = 1000000, max = -1000000;
    long int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &ai);
        if(ai < min) min = ai;
        if(ai > max) max = ai;
        sum += ai;
    }

    printf("%d %d %ld\n", min, max, sum);
    return 0;
}

