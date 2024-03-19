#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct {
    double x, y;
} coor;
 
void input_coor(coor *rec)
{
    scanf("%lf %lf", &rec->x, &rec->y);
}
 
int main(void)
{
    coor a, b, c, d;
    int n;
    int i;
 
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        input_coor(&a);
        input_coor(&b);
        input_coor(&c);
        input_coor(&d);
        if ((a.x - b.x) * (c.y - d.y) - (a.y - b.y) * (c.x - d.x) == 0) puts("YES");
        else puts("NO");
    }
 
    return (0);
}