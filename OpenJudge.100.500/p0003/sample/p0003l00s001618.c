#include <stdio.h>
int main(void){
    float a,b,c,d,e,f,x,y;
    while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF){
        y=(c-f*(a/d))/(b-e*(a/d));
        x=(c-b*y)/a;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}