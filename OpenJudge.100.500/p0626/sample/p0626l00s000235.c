#include <stdio.h>
int main(void) {
    int d;
    int n;
    scanf("%d %d", &d, &n);
    int a = 1;
    for(int f=0; f<d; f++) {
        a = a * 100;
    }
    if(n == 100) {
        printf("%d\n", n*101);
    }
    else{
        printf("%d\n", n*a);
    }
}