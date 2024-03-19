#include <stdio.h>
 
int main() {
    
    int n, a, azedou = 0;
    
    scanf("%d", &n);
    
    int cont = 0;
    
    while(cont < n) {
        scanf("%d", &a); 
        
        if (a % 2 == 0) {
            if (a % 3 != 0 && a % 5 != 0) {
                azedou = 1;
                break;
            }
        }
        
        ++cont;
        
    } if (azedou) {
        printf("DENIED\n");
    } else {
        printf("APPROVED\n");
    }
    
    return 0;
}