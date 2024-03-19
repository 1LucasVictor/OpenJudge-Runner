#include <stdio.h>
int main(int argc, char const* argv[])
{
    long long int distance;
    int count=0;
    int n;
    //int **za;
    long long int za[200000][2];
    int i;
    if(scanf("%d%lld",&n,&distance)!=2) return -1;
    if((distance>200000||distance<0)||(n<1||n>200000)) return 1;
    for(i=0;i<n;i++)
    {
        if(scanf("%lld%lld",&za[i][0],&za[i][1])!=2) return 2;
    }
    for(i=0;i<n;i++)
    {
        if((za[i][0]*za[i][0]+za[i][1]*za[i][1])<=distance*distance) count++;
    }
    printf("%d\n",count);
    return 0;
}