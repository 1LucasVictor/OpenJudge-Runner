#include<stdio.h>

int main(){
    long long a,b,c,k;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);

    if(k <= a)printf("%lld\n",k);
    else if(k <= (a + b))printf("%lld\n",a);
    else if((k - (a + b)) <= c)printf("%lld\n",a - (k - (a + b)));
    else printf("%lld\n",a - c);


    return 0;
}