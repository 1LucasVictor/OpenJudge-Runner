#include <stdio.h>

int main() {
    int d, n;
    int ans = 1;
    scanf("%d %d", &d, &n);
    
    while(d != 0) {
    	ans = ans * 100;
    	--d;
    }
    
    printf("%d\n", ans * n);
    
    return 0;
}