#include <stdio.h>

int main(){
    int a,b,c,d,e,f,x,y;
    while (scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF) {
        x=(c*e-b*f)/(a*e-b*d);
        y=(c*d-a*f)/(b*d-a*e);
        printf("%.3f %.3f\n",(double)x,(double)y);
    }
    
    return 0;
}