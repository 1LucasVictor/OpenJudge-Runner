#include<stdio.h>
#include<math.h>
int main()
{
    long long int N,i,D;
    int sum=0;
    scanf("%lld%lld",&N,&D);
    while(N--)
    {

       long long int a,b,s,t;
       double m,f;
        scanf("%lld%lld",&a,&b);
        s=abs(a);
        t=abs(b);
        m=(a*a)+(b*b);
        f=sqrt(m);
        if(f<=D)
        {
            sum++;
        }
    }
    printf("%d\n",sum);

    return 0;

}

