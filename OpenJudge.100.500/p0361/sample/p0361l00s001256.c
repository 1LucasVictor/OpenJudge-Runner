#include <stdio.h>

int main() {
    
    int S, h, m, s;
    int mod;
    
    scanf("%d", &S);
    
    h = S / 3600;
    mod = S % 3600;
    m = mod / 60;
    s = mod % 60;
    
    printf("%d:%d:%d\n",h, m, s);
    
    return 0;
}