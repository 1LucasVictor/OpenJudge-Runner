#include <stdio.h>

int main () {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a + b;
    if(c <= 16) {
        if(a <= b || b <= a) {
            printf("Yay !");
        }
    }
    else {
        printf(":(");
    }
    return 0;
}
