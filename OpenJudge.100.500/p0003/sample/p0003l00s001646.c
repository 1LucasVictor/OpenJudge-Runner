#include<stdio.h>
int main(void){
        float a,b,c,d,e,f,x,y;
        while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF){
                x=((c*e)-(b*f))/((a*e)-(b*d));
                y=((a*f)-(c*d))/((a*e)-(b*d));
                if(x==0){
                        x=x*(-1);
                }
                if((y==0)&&(a*e-b*d==0)){
                        y=y*(-1);
                }
                printf("%.3f %.3f\n",x,y);
        }
        return 0;
}