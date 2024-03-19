#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, i, f, x[100];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }
    for (f=n; f>0; f--) {
        printf("%d", x[f-1]);
        if(f>1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

