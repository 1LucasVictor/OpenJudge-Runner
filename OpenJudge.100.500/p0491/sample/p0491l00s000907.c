#include <stdio.h>
int main(){
    long int n,k;
    scanf("%ld%ld",&n,&k);
    if(n==k){
        printf("0");
        return 0;
    } else {
        long int zzz=n%k;
        long int xxx=-(zzz-k);
        if(zzz>=xxx){
            printf("%ld",xxx);
            return 0;
        } else{
            printf("%ld",zzz);
            return 0;
        }
    }
}
