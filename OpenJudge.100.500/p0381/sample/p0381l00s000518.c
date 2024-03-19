#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, x;
    int i, j, k, count=0;
    while (1) {
        scanf("%d %d", &n, &x);
        if (n==0 && x==0) {
            break;
        }
        for (i=1; i+2<=n; i++) {
            for (j=i+1; j+1<=n; j++) {
                for (k=j+1; k<=n; k++) {
                    if (i+j+k==x) {
                        count++;
                    }
                }
            }
    }
    
        printf("%d\n", count);
        count=0;
    }
    return 0;
}

