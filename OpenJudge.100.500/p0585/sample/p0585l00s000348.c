#include <stdio.h>

int main(){
    int a, b, t, a_hoji, b_hoji;
    double t2;


    scanf("%d %d %d", &a, &b, &t);
    if( ((a|b|t)<1) | ((a|b|t)>20) )return 0;

    a_hoji = a;
    b_hoji = b;
    t2 = t+0.5;
    b=0;

    for(a = 0; t2 > a; a = a + a_hoji){
        b = b + b_hoji;
    }

    b = b - b_hoji;
    

    printf("%d",b);
    return 0;
}