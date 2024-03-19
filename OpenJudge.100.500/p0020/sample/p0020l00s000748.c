#include <stdio.h>
 
/* prototype declaration */
int arePallarel(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
 
int main(int argc, const char *argv[])
{
    int i, cnt;
    double x1, y1, x2, y2, x3, y3, x4, y4;
 
    scanf("%d", &cnt);
 
    for(i=0; i<cnt; i++){    
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4); 
        if(arePallarel(x1, y1, x2, y2, x3, y3, x4, y4)) printf("YES\n");
        else printf("NO\n");
    }   
    return 0;
}
 
int arePallarel(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double ax = x1-x2, ay = y1-y2, bx = x3-x4, by = y3-y4;
    if(ax*by-ay*bx != 0) return 0;
    return 1;   
}