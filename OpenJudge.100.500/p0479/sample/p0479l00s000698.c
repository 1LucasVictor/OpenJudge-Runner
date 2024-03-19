#include<stdio.h>

int main()
{
    long long N,i;
    scanf("%lld",&N);
    long long a[N];
    long long b[N+1];
    for(i=1;i<=N;i++)
      b[i]=0;
    for(i=0;i<N-1;i++)
    {
      scanf("%lld",&a[i]);
      b[a[i]]++;
    }
    for(i=1;i<=N;i++)
    {
      printf("%lld\n",b[i]);
    }
    return 0;
}