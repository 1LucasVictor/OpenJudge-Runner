#include <stdio.h>
int main(void){
    int a, b, c;
    int i, count=0;
    scanf("%d %d %d\n", &a, &b, &c);
    
    for (i = a; i <= b; i++) {
        if (c % i == 0) count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
