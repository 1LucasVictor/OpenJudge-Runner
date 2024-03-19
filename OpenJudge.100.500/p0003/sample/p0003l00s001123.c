#include<stdio.h>

float sisyagonyu(float i){
    int about, amari;
    about = i * 10000;
    amari = about % 10;
    if(amari < 5){
        about -= amari;
    }
    else{
        about = about + 10 - amari;
    }
    i = about / 10000;
    return i;
}

int main(void){
    float a, b, c, d, e, f, x, y;
    while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
        y = (c*d-a*f)/(b*d-a*e);
        x = (c*e-b*f)/(a*e-b*d);
        
        x = sisyagonyu(x);
        y = sisyagonyu(y);
        
        
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}
