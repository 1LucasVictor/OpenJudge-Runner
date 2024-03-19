#include <stdio.h>
#define MOD 2019
#define NUM 2000000000

long long int a[NUM];
int main(void)
{
    long long int i,j,k,L,R,I,J;
    long long int c=0;
    scanf("%lld%lld",&L,&R);
    for(i=L;i<=R-1;i++){
        I=i%MOD;
        for(j=i+1;j<=R;j++){
            J=j%MOD;
            a[c]=I*J;
            c++;
        }
    }
    long long int min=a[0];
    for(k=0;k<c;k++){
        if(min>a[k])
            min=a[k];
    }
    printf("%lld\n",min);
    return 0;
}
