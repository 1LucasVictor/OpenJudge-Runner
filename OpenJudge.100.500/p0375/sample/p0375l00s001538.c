#include<stdio.h>

int main(void) {
    
    int n;
    int i, j;
    int a, b;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            printf(" %d", i);
        }
        else if(i % 3 != 0) {
            a = i;
            for(j = 1; j <= 3; j++) {
                if(a % 10 == 3) {
                    printf(" %d", i);
                    break;
                }
                else {
                    b = a / 10;
                    if(b == 3) {
                        printf(" %d", i);
                        break;
                    }
                    else {
                        a = b;
                    }
                }
            }
        }
    }
    printf("\n");
    
    return 0;
}
