#include <stdio.h>
#include <string.h>
 
int main() {
    
    int i;
    int h, n, a, all = 0;
 
    scanf("%d%d", &h, &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        all += a;
    }
 
    if(h <= all) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
    return 0;
}