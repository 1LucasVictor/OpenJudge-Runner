#include <stdio.h>
 
int main(){
    double a,b,c,d,e,f;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)>0){
            f=(f-c/a*d)/(e-b/a*d);
            c=c/a-f*b/a;
            printf("%.3f %.3f\n",c,f);
    }
    return 0;
}