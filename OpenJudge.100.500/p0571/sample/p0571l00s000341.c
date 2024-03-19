#include <stdio.h>
#define min(a,b) \
({ __typeof__ (a) _a = (a); \
    __typeof__ (b) _b = (b); \
    _a < _b ? _a : _b; })

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = a * b;
    printf("%d\n", min(x, c));
    return 0;
}