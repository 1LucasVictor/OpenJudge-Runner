#include <stdio.h>

int main(){
    long long a, b, i, j = 1, max;
    
    while(scanf("%lld %lld", &a, &b) != EOF){
    	max = a;
    	if (max < b) max = b;
        for (i = max; i > 1; i--){
            if (a%i == 0 && b%i == 0) break;
        }
        while(1){
            if (max*j % b == 0) break;
            j++;
        }
        printf("%lld %lld\n", i, max*j);
    }
    return 0;
}