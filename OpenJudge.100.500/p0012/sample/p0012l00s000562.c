#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10];
    int i, n = 0;
    
    while (scanf("%d", &i) != EOF) {
        if(i != 0) {
            a[n++] = i;
        } else {
            printf("%d\n",a[--n]);
        }
    }
    return 0;
}