#include<stdio.h>
#include<math.h>
int main()
{
    float dis;
    long int ans=0,i,x,y,n,d;
    scanf("%ld%ld",&n,&d);
    for(i=1;i<=n;i++)
    {
        scanf("%ld%ld",&x,&y);
        dis=sqrt(pow(x,2)+pow(y,2));
        if(dis<=d)
            ans++;
    }
    printf("%ld",ans);
    return 0;
}


