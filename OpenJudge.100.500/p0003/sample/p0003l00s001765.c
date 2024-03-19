#include<stdio.h>
int main(void){

        int a,b,c,d,e,f;
        double x,y;

        while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){

                        x=(float)(c*e-b*f)/(a*e-d*b);
                        y=(float)(a*f-c*d)/(a*e-d*b);

                        if(-0.0005<x && x<0.0005) x=0;
                        if(-0.0005<y && y<0.0005) y=0;

                        printf("%.3f %.3f\n",x,y);


        }
        return 0;
}