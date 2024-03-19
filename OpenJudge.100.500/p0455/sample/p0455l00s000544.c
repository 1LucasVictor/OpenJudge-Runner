#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int x;
    x = a + (a*a) + (a * a * a);
    printf("%d", x);
}