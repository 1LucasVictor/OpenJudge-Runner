#include <stdio.h>

int main(){
    int a, b, n;
    scanf("%d%d%d", &n, &a, &b);
    if(a * n < b) printf("%d\n", a * n);
    else printf("%d\n", b);
}
