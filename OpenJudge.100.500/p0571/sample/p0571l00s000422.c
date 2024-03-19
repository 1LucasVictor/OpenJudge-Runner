#include <stdio.h>

int main() {
    int n, a, b;
    char input[256];

    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    
    int r = n * a;
    if(r <= b) {
        printf("%d\n", r);
    } else {
        printf("%d", b);
    }
}