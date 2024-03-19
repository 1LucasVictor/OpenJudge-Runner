#include <stdio.h>
#include <math.h>

typedef struct vec vec;

struct vec{
    double x, y;
};

static vec p(double x, double y){
    vec p = {x, y};
    return p;
}

static double cross(vec a, vec b){
    return a.x * b.y - a.y * b.x;
}

int main(void){
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        vec v1 = {x2-x1, y2-y1};
        vec v3 = {x4-x3, y4-y3};
        if(fabs(cross(v1, v3))<0.000000001){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
    
}
