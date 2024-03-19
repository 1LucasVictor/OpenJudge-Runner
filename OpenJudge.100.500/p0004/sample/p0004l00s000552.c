#include<stdio.h>
int main()
{

    long long int a,b,t,i,h,c,k;
    while(scanf("%lld %lld",&a,&b)!=EOF){
            h=0;
            if(a>b){
                t=a;

            }
            else {
                t=b;
            }
            for(i=1;i<=t;i++){
                if(a%i==0&&b%i==0){
                    if(h<i){
                        h=i;
                    }
                }

            }
            c=a*b;
            k=(a*b)/h;

          printf("%lld %lld\n",h,k);
          }
          return 0;
}