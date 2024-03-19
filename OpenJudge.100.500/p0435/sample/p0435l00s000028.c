#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,count=0;
    scanf("%d %d",&n,&d);
    while(n--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        double dis=(x*x)+(y*y);
        dis=sqrt(dis);
        if(dis>=d)
            count++;

    }
    printf("%d\n",count);
}
