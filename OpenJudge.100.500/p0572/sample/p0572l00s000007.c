#include <stdio.h>
#define MOD 2019
#define NUM


int main(void)
{
    
    long long int a,i,j,L,R,I,J;
    scanf("%lld%lld",&L,&R);
    a=(L%MOD)*((L+1)%MOD);
    for(i=L%MOD;i<=(R-1)%MOD;i++){
        I=i%MOD;
        for(j=(i+1)%MOD;j<=R%MOD;j++){
            J=j%MOD;
            if(a>I*J)
            a=I*J;
        }
    }
    printf("%lld\n",a);
    return 0;
}
