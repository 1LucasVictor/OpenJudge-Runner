#include<stdio.h>

int main(){
    int i,a,b,c,d,e,f,tmp;
    float x,y;
    for(i=0;i<2;i++){
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        x = (float)(c*e-b*f)/(a*e-d*b);
        y = (float)(c*d-a*f)/(b*d-a*e);
        if(-0.0005<x && x<=0)x=0;
        if(-0.0005<y && y<=0)y=0;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}