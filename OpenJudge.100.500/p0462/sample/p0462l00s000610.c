#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
    long int a;
    double b;
    long int ans;
    scanf("%ld%lf", &a, &b);
    ans = a * 100 * b / 100;
    printf("%ld\n", ans);

    return 0;
}
