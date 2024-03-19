#include <stdio.h>
int main(void) {
    int d;
    int n;
    scanf("%d %d", &d, &n);
    if(d == 0 || d == 1 || d== 2 && n > 0 && n < 101) {
        int a = 1;
        for(int f=0; f<d; f++) {
            a = a * 100;
        }
        printf("%d\n", n*a);
    }
}