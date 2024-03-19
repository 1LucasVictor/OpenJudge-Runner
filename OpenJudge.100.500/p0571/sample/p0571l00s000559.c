#include <stdio.h>

int main()
{
    int n,a,b,t;
    scanf("%d%d%d",&n,&a,&b);
    if(a<= b){
        t=n*a;
        printf("%d",t);

    }
    else if(a>=b){
        t=n*b;
        printf("%d",t);
    }
    else if(n*a==b){
        printf("%d",b);
    }
    else if(n*b==a){
        printf("%d",a);
    }
    return 0;
}