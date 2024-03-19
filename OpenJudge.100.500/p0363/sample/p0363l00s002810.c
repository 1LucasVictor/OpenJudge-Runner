#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a;
    int b;
    int c;
    
    scanf("%d %d %d", &a, &b, &c);

    if (a>=c && b>=c) {
        printf("%d ", c);
        if (a>=b) {
            printf("%d %d\n", b, a);
        }else{
            printf("%d %d\n", a, b);
        }
    }else if (a>=b && c>=b) {
        printf("%d ", b);
        if (a>=c) {
            printf("%d %d\n", c, a);
        }else{
            printf("%d %d\n", a, c);
        }
    }else {
        printf("%d %d %d\n", a, b, c);
    }
    
    
    return 0;
}
