#include <stdio.h>

int main() {
    int n, a, deuRuim = 0;
    //printf("%d\n", a);
    
    scanf("%d", &n);
    
    int i = 0;
    
    while(i < n) {
        scanf("%d", &a);
        
        if (a % 2 == 0) {
            if (a % 3 != 0 && a % 5 != 0) {
                deuRuim = 1;
                break;
            }
        }
        
        ++i;  //i = i + 1;  | i++;
    }
    
    if (deuRuim) {
        printf("DENIED\n");
    } else {
        printf("APPROVED\n");
    }
    
    return 0;
}







