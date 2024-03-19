#include <stdio.h>

int main(void){

    float a,b,c,d,e,f;
    float x,y;
    float tmp1,tmp2;
    
    while(1){
        a = 2000;
        scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
        if(a == 2000)break;

        tmp1 = c*e - b*f;
        tmp2 = a*e - b*d;

        x = tmp1 / tmp2;

        tmp1 = a*f - c*d;
        tmp2 = a*e - b*d;

        y = tmp1 / tmp2;

        printf("%.3f %.3f\n", x, y);
    }
    
    return 0;
}