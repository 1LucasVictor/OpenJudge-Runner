#include<stdio.h>
int main()
{
    int a,b,c,d,i,e=0,f;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        for(i=1;i<=a;i++)
        {
            c=a-i;
            d=b-i;
            if(c==d||c==-1*d)
            {
               e++;
               f=i;
               break;
            }

        }

    }
    else
    {
         for(i=1;i<=b;i++)
        {
            c=a-i;
            d=b-i;
            if(c==d||c==-1*d)
            {
                e++;
                f=i;
                break;
            }

        }

    }
    if(e==0)
        printf("IMPOSSIBLE\n");
    else
        printf("%d\n",f);

}
