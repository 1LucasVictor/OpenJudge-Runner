#include <stdio.h>

int main(){
    int n, d, base = 1;
    scanf("%d%d", &d, &n);
    for(int i = 0; i < d; i++){
        base *= 100;
    }
    printf("%d", base * n);
    return 0;
}
