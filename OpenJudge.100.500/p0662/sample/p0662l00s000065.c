#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
        int max=a,min=b;
        if(max<=c)
        {
            max=c;
        }
        if(min>=d)
        {
            min=d;
        }
        int res=min-max;
        if(res<0)
        {
            res=0;
        }
        printf("%d\n",res);
    return 0;
}
