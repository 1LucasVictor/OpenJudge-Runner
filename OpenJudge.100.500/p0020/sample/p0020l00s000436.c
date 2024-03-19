#include <stdio.h>
#include <string.h>
 
int main(void){
    int n;
    double x1,x2,x3,x4,y1,y2,y3,y4,ax,ay,bx,by;
 
    scanf("%d",&n);
    for(1;n>0;n--){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        ax=(x2-x1);ay=(y2-y1);bx=(x4-x3);by=(y4-y3);
        if(ax*by-ay*bx==0.0)printf("YES\n"); else printf("NO\n");
    }
 
    return 0;
}