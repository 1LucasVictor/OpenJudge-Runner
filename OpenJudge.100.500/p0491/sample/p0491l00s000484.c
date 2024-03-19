#include<stdio.h>

int main() {
    long long int a,b,x,c,d;
    scanf("%lld %lld",&a,&b);
    if(b==1){
        printf("0\n");
    }
    else if(a<b){
        printf("%lld\n",a);
    }
    else {
        c = a/b;
        d = a-(c*b);
        if(d>b)
            printf("%lld\n",d-b);
        else
            printf("%lld\n",b-d);
    }


    return 0;
}
