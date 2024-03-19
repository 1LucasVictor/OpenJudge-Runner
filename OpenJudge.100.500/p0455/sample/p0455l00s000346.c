#include <stdio.h>
#include <string.h>

int main() {

    int a;
    scanf("%d", &a);

    int mysum = a;

    mysum += a * a;
    mysum += a * a * a;
    printf("%d", mysum);

    return 0;
}
