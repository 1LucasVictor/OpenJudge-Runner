#include <stdio.h>

int main() {
    int n;
    int a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    int uuu = 0;
    for(int i = a; i < b+1; ++i){
        if (i%n == 0){
            uuu = 1;
            break;
        }
    }
    
    if (uuu == 1)
        printf("OK\n");
    else
        printf("NG\n");
    return 0;
}
