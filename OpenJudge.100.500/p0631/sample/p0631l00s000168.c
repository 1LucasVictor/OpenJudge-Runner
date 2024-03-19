    #include <stdio.h>
    int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    a = c - a;
    if (a <= b && a >= 0) {
    printf("YES\n");
    } else if (a > b || a < 0) {
    printf("NO\n");
    } return 0;
    }  