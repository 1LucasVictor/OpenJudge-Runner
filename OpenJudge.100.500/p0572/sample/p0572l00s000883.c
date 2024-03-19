#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int r;
    int l,i,j;
    long long int n,n1;
    scanf("%d %d",&l,&r);
    if(((r/2019)-(l/2019))>=1){
       printf("0");
       }
    else if((((r/673)-(l/673))>=1)&&(((r/3)-(l/3))>=1)){
       printf("0");
       }
    else{
       n=(l*(l+1)*1ll)%2019;
    for(i=l;i<r;i++){
        for(j=i+1;j<=r;j++){
            n1=(i*j*1ll)%2019;
            if(n1<n)n=n1;
        }
    }
    printf("%ld",n);
    }
    return 0;
}
