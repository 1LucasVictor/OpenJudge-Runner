#include<stdio.h>
int main()
{
    unsigned long long int m,n,o,a,temp;
    scanf("%llu %llu", &m, &n);
    temp=n;
    if(n>m){
        temp=m;
        m=n;
    }
    if(temp==1){
        printf("0\n");
    }
    else if(temp==0){
        printf("%llu", m);
    }
    else{
        o=m%temp;
        if(o>0){
            a=temp-o;
            printf("%llu\n", a);
        }
        else
            printf("%llu\n", temp);
    }
    return 0;
}
