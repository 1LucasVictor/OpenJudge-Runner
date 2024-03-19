#include<stdio.h>
#include<math.h>
int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        int c = a + b;
        int x = floor(log10(c)) + 1;
        printf ("%d\n", x);
    }
    return 0;
}