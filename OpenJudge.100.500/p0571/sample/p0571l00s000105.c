#include <stdio.h>
int main(void){
    int n, a, b;
    int i;
    int sum = 0;
    scanf("%d %d %d\n", &n, &a, &b);
    
    for (i=0; i<n; i++) {
        sum += a;
    }
    
    if (sum < b) printf("%d", sum);
    else printf("%d", b);
    
    return 0;
}
