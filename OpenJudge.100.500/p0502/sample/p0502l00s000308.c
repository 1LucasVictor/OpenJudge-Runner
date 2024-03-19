#include <stdio.h>

int main()
{
    int n, a, sogra_desce=0;
    int i = 0;
    
    scanf("%d", &n);
    
    while (i<n) {
        scanf("%d", &a);
        
        if (a%2==0) {   
            if (a % 3 != 0 && a % 5 != 0) {
                sogra_desce=1;
                break;
            }
        }
        ++i;
    }
    if (sogra_desce) {
        printf("DENIED");
    }
    else {
        printf("APPROVED");
    }
    return 0;
}