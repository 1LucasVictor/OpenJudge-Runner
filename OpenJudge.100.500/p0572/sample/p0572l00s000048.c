#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int r;
    int l;
    long long int n;
    scanf("%d %d",&l,&r);
    if(((r/2019)-(l/2019))>=1){
       printf("0");
       }
    if(((r/2019)-(l/2019))==0){
        n=(l*(l+1)*1ll)%2019;
        printf("%d",n);
    }
    return 0;
}
