#include <stdio.h>
 
int main() {
    int n, a, wrong = 0;
    
    scanf("%d", &n);
    
    int i = 0;
    
    while(i < n) {
        scanf("%d", &a);
        
        if (a % 2 == 0) {
            if (a % 3 != 0 && a % 5 != 0) {
                wrong = 1;
                break;
            }
        }
        
        ++i;
    }
    
    if (wrong) {
        printf("DENIED\n");
    } else {
        printf("APPROVED\n");
    }
    
    return 0;
}