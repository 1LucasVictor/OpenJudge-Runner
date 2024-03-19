#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            b[0] = 0;
            continue;
        }
        
        scanf("%d", &a[i]);
        b[i] = 0;
    }
    
    for(int i = 1; i < n; i++) {
        b[a[i]-1]++;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", b[i]);
    }
}
