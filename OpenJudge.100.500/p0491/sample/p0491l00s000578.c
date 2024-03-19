#include<stdio.h>
int main()
{
   long long int n,k,s;
    scanf("%lld%lld",&n,&k);
    if (n==0){
        printf("%lld\n",k);
    }
    else{
        while(1){
            s=abs(n-k);
            if(n>k){
                n=s;
            }
            else{
                printf("%d\n",s);
                break;
            }
        }
    }
}