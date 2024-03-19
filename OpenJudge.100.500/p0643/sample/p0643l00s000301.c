#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if ((a * b) % 2 == 0) {
        printf("%s","Even");
    } else {
        printf("%s","Odd");
    }
}