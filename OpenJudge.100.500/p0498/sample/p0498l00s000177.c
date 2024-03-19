#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a % 2 == 1) a++;
    printf("%d\n", a/2);

    return 0;
}
