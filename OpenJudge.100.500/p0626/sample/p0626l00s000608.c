#include<stdio.h>
main()
{
    long int d,n;
    scanf("%ld%ld",&d,&n);
    if(d==0)printf("%ld\n",n);
    else if(d==1)
        printf("%ld\n",n*100);
    else if(d==2)
        printf("%ld\n",n*10000);
    return 0;
}
