#include<stdio.h>
 
int main(){
     
    double a,b,c,d,e,f;
    double y,x;
     
    while (1) {
         
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
        if (getchar() == EOF)break;
        y=(c*d-f*a)/(b*d-e*a);
        x=(c-b*y)/a;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}