#include <stdio.h>
#include <string.h>

int main() {
    int one, zr, mon, k, max = 0;
    
    scanf("%d %d %d %d", &one, &zr, &mon, &k);
    
    if (k - one <= 0){
        max = k;
        //printf("-\n");
    }
    else{
        if (k - (one + zr) >= k){
            max = one;
            //printf("--\n");
        }
        else{ 
            max = one - (k - (one + zr));
            //printf("---\n");
        }
    }
    
    printf("%d\n", max);
    
    
    return 0;
}
