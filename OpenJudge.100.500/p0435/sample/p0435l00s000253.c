#include <stdio.h>
#include <math.h>

int main() {
    int i, N, D, count = 0;
    int  x[N], y[N];
    double distance;

    scanf("%d %d", &N, &D);

    for(i = 0; i < N; i++) {
        distance = 0.0;
        scanf("%d %d", &x[i], &y[i]);
        distance = sqrt(x[i]*x[i] + y[i]*y[i]);
        if(distance <= (double)D) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}