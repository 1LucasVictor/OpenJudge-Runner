#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    double x1,x2,x3,x4,xab,xcd,y1,y2,y3,y4,yab,ycd,ab,cd,deta1,deta2=0;
    scanf("%lf",&deta1);
    while(deta1!=deta2)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        xab=x2-x1;
        xcd=x4-x3;
        yab=y2-y1;
        ycd=y4-y3;
        ab=yab/xab;
        cd=ycd/xcd;
        if(ab==cd)
            printf("YES\n");
        else
            printf("NO\n");
        deta2++;
    }
    return 0;
}