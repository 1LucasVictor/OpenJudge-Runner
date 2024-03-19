#include <stdio.h>
int main()
{
    long long  i, j, GCD, LCM, t, x, y;
    while((scanf("%lld %lld", &i, &j))!=EOF){
            x=i;
            y=j;
        if(i==0) GCD=j;
        else if(j==0) GCD=j;
        else{
            while(j!=0){
                t=j;
                j=i%j;
                i=t;
            }
          GCD=i;
        }
        LCM=(x*y)/GCD;
        printf("%lld %lld\n",GCD,LCM);
    }
    return 0;
}