#include<stdio.h>
int main()
{
    double fir, sec;
    long long int x, y, ans, i;
    scanf("%lld %lld", &x, &y);
    for(i=0;i<1000000000;i++)
    {
        fir=fabs(x-i);
        //printf("%.0lf ", fir);
        sec=fabs(y-i);
        //printf("%.0lf\n", sec);
        if(fir==sec)
        {
            ans=i;
            printf("%lld\n", i);
            break;
        }
    }
    if(fir!=sec)
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
