#include <stdio.h>

int main(){
    double a,b,c,k;
    
    scanf("%lf %lf %lf %lf", &a,&b,&c,&k);

    if(a >= k || a + b >= k){
        printf("%.0lf", a);
    }else{
        printf("%.0lf", 2 * a + b - k);
    }
    }