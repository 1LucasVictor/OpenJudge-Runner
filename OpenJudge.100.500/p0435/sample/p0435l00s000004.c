#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d,x,y,count=0,i,j;
    double k;
    scanf("%lld %lld",&n,&d);
    for(i=0;i<n;i++){
        scanf("%lld %lld",&x,&y);
        k=sqrt((x*x)+(y*y));
        if(k<=d)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
