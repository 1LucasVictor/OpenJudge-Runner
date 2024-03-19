#include <stdio.h>
#include <stdlib.h>

int main(){
    long int n,k;
    long int result = 0;
    int tmp = 0;
    scanf("%ld %ld",&n,&k);
    result = n;
    while(1){
        if(n <= k){
            tmp = abs(n - k);
        }else{
            tmp = n % k;
        }
        if(tmp < n){
            n = tmp;
            result = tmp;
        }else{
            printf("%ld",result);
            break;
        }
    }
    return 0;
}