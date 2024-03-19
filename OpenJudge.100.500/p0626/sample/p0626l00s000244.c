#include <stdio.h>
#include <math.h>
int main(){
    double d,n;
    int a;

    scanf("%lf %lf", &d, &n);
    if(n!=100){
        a = (int)(n * pow(100, d));
    }else{
        a = (int)(101 * pow(100, d));
    }
    printf("%d\n", a);

    return 0;
}