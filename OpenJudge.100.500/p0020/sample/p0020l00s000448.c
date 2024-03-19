#include <stdio.h>
#include <math.h>

typedef struct vec vec;
struct vec{
    double x,y;
};

static vec make(vec a,vec b){
    vec p={b.x-a.x,b.y-a.y};
    return p;
}

static int para(vec a,vec b){
    double lab,lcd,dot;
    lab=a.x*a.x+a.y*a.y;
    lcd=b.x*b.x+b.y*b.y;
    dot=a.x*b.x+a.y*b.y;
    if(dot*dot==lab*lcd) {
        printf("YES\n");
        return 0;
    }
    return 1;
}

int main(void){
    int n,i,j;
    vec v[4];
    vec ab,cd;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        for(i=0;i<4;i++){
            scanf("%lf %lf",&v[i].x,&v[i].y);
        }
        ab=make(v[0],v[1]);
        cd=make(v[2],v[3]);
        if(para(ab,cd)) printf("NO\n");
    }
    
    return 0;
}

