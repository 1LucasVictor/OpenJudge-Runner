#include<stdio.h>

int main(void){
    long int l, r;
    long int ans = 0;
    long int i, j;
    long int mod = 2018;
    scanf("%ld %ld",&l, &r);
    if(r-l-1 >= 2019){
        ans = 0;
        printf("%ld\n",ans);
        return 0;
    }

    for(i=l;i<r;i++){
        for(j=i+1;j<=r;j++){
            if((i*j)%2019 < mod){
            mod = (i*j)%2019;
            }
        }
    }
    ans = mod;
    printf("%ld\n",ans);
    return 0;
    
}
