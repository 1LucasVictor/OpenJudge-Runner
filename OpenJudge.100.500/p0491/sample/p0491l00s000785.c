#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n,k;
    long long tmp = 0;
    scanf("%ld %ld",&n,&k);
    while(1){
        if(n <= k){
            tmp = n - k;
            if(tmp < 0){
                tmp = -1 * tmp;
            }
        }else{
            tmp = n % k;
        }
        if(tmp < n){
            n = tmp;
        }else{
            printf("%ld",n);
            break;
        }
    }
    return 0;
}
