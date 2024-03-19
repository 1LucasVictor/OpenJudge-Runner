#include<stdio.h>
main()
{
  long  long int d,n;
    scanf("%lld%lld",&d,&n);
    if(d==0)printf("%lld\n",n);
    else if(d==1)
        printf("%lld\n",n*100);
    else if(d==2)
        printf("%lld\n",n*10000);
    return 0;
}
