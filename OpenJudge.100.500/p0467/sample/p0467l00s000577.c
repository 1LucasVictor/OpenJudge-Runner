#include<stdio.h>
int main()
{
    long long a,b,c,k,cc,sum;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    if(k<=a){
        sum=k;
    }
    else if(k>a&&k<=(a+b)){
        sum=a;
    }
    else{
        cc=k-(a+b);
        sum=a-cc;
    }
    printf("%lld",sum);
    return 0;
}