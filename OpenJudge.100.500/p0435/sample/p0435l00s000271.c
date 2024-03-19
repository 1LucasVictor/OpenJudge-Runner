#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int n, d, x, y;
    scanf("%d %d", &n, &d);
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        long long temp1, temp2, mysum;
        temp1 = x;
        temp1 *= x;
        temp2 = y;
        temp2 *= y;
        mysum = temp1;
        mysum += temp2;

        double distance = sqrt(mysum);

        //printf("%lld  %lld %lld %f\n", temp1, temp2, mysum, distance);

        if (distance <= d) {
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}