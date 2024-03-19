#include <stdio.h>
int main(void)
{
    double x1,x2,x3,x4,xab,xcd,y1,y2,y3,y4,yab,ycd,ab1,cd1,ab2,cd2,deta1,deta2=0;
    scanf("%lf",&deta1);
    while(deta1!=deta2)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        xab=x2-x1;
        xcd=x4-x3;
        yab=y2-y1;
        ycd=y4-y3;
        if(xab==0&&xcd==0)
        {
            if(x1!=x3)
                printf("YES\n");
            else
                printf("NO\n");
        }
        if(yab==0&&ycd==0)
        {
            if(y1!=y3)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            ab1=yab/xab;
            cd1=ycd/xcd;
            if(x1<0&&x3>0)
            {
                ab2=ab1*x1-y1;
                cd2=cd1*x3-y3;
            }
            else if(x1>0&&x3<0)
            {
                ab2=ab1*x1-y1;
                cd2=cd1*x3-y3;
            }
            else
            {
                ab2=y1-ab1*x1;
                cd2=y3-cd1*x3;
            }

            if(ab1==cd1)
            {
                if(ab2!=cd2)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
                printf("NO\n");
        }
        deta2++;
    }
    return 0;
}