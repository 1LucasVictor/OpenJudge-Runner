#include <stdio.h>
#include <math.h>

int main(void){
    int num, count=0;
    double distance;
    scanf("%d %lf", &num, &distance);

    double x[num], y[num], p_dis[num];
    for(int i=0; i<num; i++){
        scanf("%lf %lf", &x[i], &y[i]);
        p_dis[i] = sqrt(pow(x[i], 2) + pow(y[i], 2));
        if(p_dis[i] <= distance) count ++;
    }

    printf("%d\n", count);
    return 0;
}
