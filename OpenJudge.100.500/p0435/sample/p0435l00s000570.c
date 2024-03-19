#include <stdio.h>
#include <math.h>
int main(){
    int n, d, cont = 0;
    scanf("%d%d", &n, &d);
    for(int i = 0; i < n; ++i){
        double x, y;
        scanf("%lf%lf", &x, &y);
        unsigned long long x2 = pow(x, 2);
        unsigned long long y2 = pow(y, 2);
        double raiz = sqrt(x2+y2);
        
        if(raiz <= d)
            cont += 1;
    }
    printf("%d", cont);

    return 0;
}
