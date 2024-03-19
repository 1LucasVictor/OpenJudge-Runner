#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,j;
    long long int n,n1,l,r;
    scanf("%lld %lld",&l,&r);
    
    if(((r/2019)-(l/2019))>=1){
       printf("0");
       }
    else if((((r/673)-(l/673))>=1)&&(((r/3)-(l/3))>=1)){
       printf("0");
       }
    else{
       n=(l*r)%2019;
    for(i=l;i<r;i++){
        for(j=i+1;j<=r;j++){
            n1=(i*j)%2019;
            if(n1<n)n=n1;
            if(n==1)break;
        }
        if(n==1)break;
    }
    printf("%lld",n);
    }
    return 0;
}
