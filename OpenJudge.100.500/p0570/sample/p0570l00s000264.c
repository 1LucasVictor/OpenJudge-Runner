#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,c,d;
    scanf("%d%d",&a,&b);
    for(i=0;i<=1000000000;i++)
    {
        c=abs(a-i);
        d=abs(b-i);
        if(c==d)
        {
            printf("%d\n",i);
            break;
        }

    }
    if(c!=d)
        {
            printf("IMPOSSIBLE\n");
        }
}
