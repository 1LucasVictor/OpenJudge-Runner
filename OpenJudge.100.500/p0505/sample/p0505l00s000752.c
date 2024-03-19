#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,sum=0,i,n;
    scanf("%lld%lld",&a,&b);
    while(b--){
            scanf("%lld",&n);
          sum=sum+n;
    }
    if(sum>=a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
