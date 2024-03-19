#include <stdio.h>

int main() {

    int i;
    int n, a;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        if(a % 2 == 0) {
            if(a % 3 == 0) {
                continue;
            }
            else if(a % 5 == 0) {
                continue;
            }
            else {
                printf("DENIED\n");
                return 0;
            }
        }
    }

    printf("APPROVED\n");
    
    return 0;
}