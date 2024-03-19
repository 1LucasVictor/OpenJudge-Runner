#include <stdio.h>

int main(int argc, const char * argv[]) {
    int S, h, m, s, x;
    scanf("%d",&S);
    h = S / 3600;
    x = S - h * 3600;
    m = x / 60;
    s = x % 60;
    printf("%d:%d:%d\n",h, m, s);
    return 0;
    
}