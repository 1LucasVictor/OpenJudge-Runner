#include<stdio.h>

int main (void){

    long long a,b,c,k,sum=0;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);

    if(k<=a){
        sum+=k;
        printf("%lld",sum);
    }else{
        sum+=a;
        k-=a;
        if(k<=b){
            printf("%lld",sum);
        }else{
            k-=b;
            sum-=k;
            printf("%lld",sum);
        }
    }


    return 0;
}