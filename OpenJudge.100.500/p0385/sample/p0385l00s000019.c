#include<stdio.h>
int main()
{
    long long int x[1000],i=0,n=0,sum;
    while(1)
    {
        scanf("%lld",&x[i]);
        if(x[i]==0){
            break;
        }
        i++;
        n++;
    }
    for(i=0;i<n;i++){
        sum=0;
        while(x[i]!=0){
            sum=sum+(x[i]%10);
            x[i]=x[i]/10;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

