#include <stdio.h>

int main(int argc, const char * argv[]) {
    long n;
    long num[20000];
    int i, j;
    long max;
    
    scanf("%ld", &n);
    for (i=0; i<n; i++) {
        scanf("%ld", &num[i]);
    }
    max = num[1] - num[0];
    
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (num[j] - num[i] > max) {
                max = num[j] - num[i];
            }
        }
    }
    
    printf("%ld\n", max);
    
    return 0;
}