
#include <stdio.h>
int main(void){
    long a, b, c, k;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
    // printf("%d %d %d %d\n", a, b, c, k);
    if(a + b >= k) printf("%ld\n", a);
    else printf("%ld\n", a-1*(k - a - b));
    return 0;
}