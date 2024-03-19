#include <stdio.h>

int main(){
    float a,b,c,d,e,f;
    float x,y;

    while(1){
        a=-2000;
        scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
        if(a<=-1000){
            break;
        }
        
        x=(b*f-c*e)/(b*d-a*e);
        y=(c*d-a*f)/(b*d-a*e);

        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}