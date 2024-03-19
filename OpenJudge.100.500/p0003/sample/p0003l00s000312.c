#include <stdio.h>

int main(void){

    int a,b,c,d,e,f;
    float x,y;
    int tmp1,tmp2;
    
    while(1){
        a = 2000;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
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