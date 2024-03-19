#include <stdio.h>
 
main(void)
{
    int a,n,i;
     
    long long int min=1000000 , max=-1000000 , sum=0;
    a=0;
     
    scanf("%d",&n);
     
    for(a=1;a<=n;a++){
        scanf("%d",&i);
        if(i<min)
        min=i;
        if(i>max)
        max=i;
        sum+=i;
    }
    printf("%lld %lld %lld\n",min,max,sum);
     
    return 0;
}