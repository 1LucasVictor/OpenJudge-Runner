#include<stdio.h>
#include<math.h>
int main()
{
    long long n,k,m,d;
    scanf("%lld%lld",&n,&k);
    if(n==0||k==1) { printf("0\n");return 0; }
    if(n%2==0&&k%2==0&&n>=k) { printf("0\n");return 0; }
    if(n==k) { printf("0\n");return 0; }
    if(n%2==1&&k%2==1&&n>=k) { printf("1\n");return 0; }
    m=0;
    while(n>m){
        n=fabs(n-k);
        m=fabs(n-k);
    }
    d=fabs(m-k);
    if(d<m)
        m=d;
    printf("%lld\n",m);
    return 0;
}
