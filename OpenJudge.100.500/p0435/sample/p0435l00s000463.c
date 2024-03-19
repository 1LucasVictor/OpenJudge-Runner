#include<stdio.h>
#include<math.h>
int main()
{
    float n,d,x,y,dis;
    int ans=0,i;
    scanf("%f%f",&n,&d);
    for(i=1;i<=n;i++)
    {
        scanf("%f%f",&x,&y);
        dis=sqrt(pow(x,2)+pow(y,2));
        if(dis<=d)
            ans++;
    }
    printf("%d",ans);
    return 0;
}


