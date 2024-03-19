#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define input_i(x) scanf("%d", &x)
#define input_lli(x) scanf("%lld", &x)
#define input_s(x) scanf("%s", x)

#define BUFSIZE 4

int main(int argc, char const *argv[]) {
    int A, B, i, outlet= 1, ans= 0;
    input_i(A);
    input_i(B);
    while(1) {
        if(outlet >= B) break;
        ans++;
        outlet= outlet - 1 + A;
    }

    printf("%d\n", ans);

    return 0;
}
