#include <stdio.h>
int main(){
    long int a;
    long double b;
    scanf("%ld %Lf", &a, &b);
    
    //printf("%d %f\n", a, b);
    long double tmp = a * b;
    //printf("%Lf\n", tmp);
    long int ans = tmp;
    printf("%ld\n", ans);

    return 0;
}
