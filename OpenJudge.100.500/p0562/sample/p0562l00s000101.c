#include <stdio.h>

int main(void){
    int a, b, count = 0, total = 1;
    
    scanf("%d%d", &a, &b);
    
    while(total < b) {
        total += a-1;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
