#include <stdio.h>
#include <string.h>

int main() {
    long long one, zr, mon, k, max = 0;
    
    scanf("%lld %lld %lld %lld", &one, &zr, &mon, &k);
    
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
    
    printf("%lld\n", max);
    
    
    return 0;
}
