#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(){
    int n, d;
    int i;
    int cn = 0;

    scanf("%d %d", &n, &d);

    for(i = 0;i < n;i++){
        double x, y;
        scanf("%lf %lf", &x, &y);
        if(d >= sqrt((x * x) + (y * y))) cn++;
    }
    printf("%d", cn);

    return 0;
}