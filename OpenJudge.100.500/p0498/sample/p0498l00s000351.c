#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    if(n%2 == 0) {
        i=n/2;
        printf("%d\n", i);
    }
    if(n%2 == 1) printf("%d\n", n/2 +1);
    return 0;
}
