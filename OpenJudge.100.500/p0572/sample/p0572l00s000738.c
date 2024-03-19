#include <stdio.h>
#define MOD 2019
#define NUM


int main(void)
{
    
    long long int a,b,i,j,L,R;
    scanf("%lld%lld",&L,&R);
    if(R-L>2019){
        a=0;
        printf("%lld\n",a);
        return 0;
    }
    b=2020;
    for(i=L;i<=(R-1);i++){
        
        for(j=(i+1);j<=R;j++){
            a=(i*j)%MOD;
            if(a<b)
                b=a;
        }
    }
   
    printf("%lld\n",b);
    return 0;
}
