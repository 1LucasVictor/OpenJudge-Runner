# include <stdio.h>
# include <math.h>
# include <stdlib.h>


int main(){
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    
    if (n < k){
        long long int menos = k - n;
        
        if (menos < n)
            printf("%lld\n", menos);
        else
            printf("%lld\n", n);
    }
    else if (n%k == 0)
        printf("0\n");
    
    else{
        int a = n%k;
        printf("%lld\n", k - a);
    }
    return 0;
}
