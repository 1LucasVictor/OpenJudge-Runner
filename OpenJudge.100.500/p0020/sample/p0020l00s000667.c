#include<stdio.h>

int main(void) {
    double x1,y1,x2,y2,x3,y3,x4,y4;
    double t_ax,t_ay,t_cx,t_cy;
    int dataset;

    scanf("%d",&dataset);

    int i;
    for(i = 0; i < dataset; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

        t_ax=x1-x2;
        t_ay=y1-y2;
        t_cx=x3-x4;
        t_cy=y3-y4;

        if(t_cy*t_ax==t_cx*t_ay) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}