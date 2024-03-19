#include<stdio.h>
int main()
{
    long long n,i,m,sum=0,j,a=0;
    while(scanf("%lld",&n)!=EOF){
        for(i=1;i<=n;i++){
            m=0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    m++;
                }
            }
            if(m==2){
                    a++;
                }
        }
        printf("%lld\n",a);
        a=0;
    }

    return 0;
}