#include <stdio.h>
#include <stdlib.h>

int main(){
    long long a,b,i;

    scanf("%lld %lld",&a,&b);

    for(i = 0 ; i <= 1000000000; i++){
        if(abs(a-i) == abs(b-i)){
            printf("%lld\n",i);
            return 0;
        }
    }

    printf("IMPOSSIBLE\n");
    return 0;
}