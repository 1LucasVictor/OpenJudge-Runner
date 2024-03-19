#include <stdio.h>
#include <math.h>

int main() {
    int t, max, cont = 0;
    scanf("%d %d", &t, &max);
    
    for (int j = 0; j < t; ++j){
        double x, y;
        scanf("%lf %lf", &x, &y);
        
        unsigned long long a = x*x, b = y*y;

        double dis = sqrt(a+b);
        //printf("---%lf\n", dis);
        
        if (dis <= max)
            cont += 1;
    }
    printf("%d\n", cont);

    return 0;
}
