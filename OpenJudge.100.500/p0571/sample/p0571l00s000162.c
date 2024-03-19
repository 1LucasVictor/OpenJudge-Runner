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
    return 0;
}
