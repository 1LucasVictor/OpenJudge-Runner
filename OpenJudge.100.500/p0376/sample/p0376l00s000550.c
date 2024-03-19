#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, x;
    int a[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        a[i] = x;
    }
    for(int j=n-1; j>=0; j--){
        if(j<n-1) printf(" ");
        printf("%d", a[j]);
    }
    printf("\n");
    return 0;
}

