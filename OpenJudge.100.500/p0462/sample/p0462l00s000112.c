#include<stdio.h>

int main(void){
    long long int a,d;
    double b,c;
    scanf("%lld %lf",&a,&b);
    /*if(a <= 0 || 1000000000000000 < a){
        goto end;
    }
    if(b < 0 || 10 <= b){
        goto end;
    }*/
    c = a*b;
    //printf("%lf\n",c);
    c *= 10;
    //printf("%lf\n",c);
    d = (long long int)c;
    //printf("%lld\n",d);
    d = d-(d%10);
    //printf("%lld\n",d);
    d /= 10;
    printf("%lld\n",d);
end:
    return 0;
}
