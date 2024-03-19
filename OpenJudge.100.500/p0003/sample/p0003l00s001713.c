#include<stdio.h>
int main(void){
        double a,b,c,d,e,f,_c,_f;
        while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
                _c=(c*d*(a*e-b*d)-b*d*(a*f-c*d))/(a*d*(a*e-b*d));
                _f=(a*f-c*d)/(a*e-b*d);
                if(_c==-0.)_c=0.;
                if(_f==-0.)_f=0.;
                printf("%.3f %.3f\n",_c,_f);
        }
        return 0;
}