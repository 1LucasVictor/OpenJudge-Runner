#include <stdio.h>
int main(void){
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    // printf("%d %d %d %d\n", a, b, c, k);
    if(a + b >= k) printf("%d", a);
    else printf("%d", a-1*(k - c));
    
}
