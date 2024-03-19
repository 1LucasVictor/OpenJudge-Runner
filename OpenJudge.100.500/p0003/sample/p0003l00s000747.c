#include<stdio.h>
#define N 100
int main() {
    double a[N][6],x[N],y[N];
    int i=0;
    int j;
    while (scanf("%lf",&a[i][0])!=EOF) {
        for (j = 1; j < 6; j++) {
            scanf("%lf",&a[i][j]);
        }
        i++;
    }
    
    for (j = 0; j < i; j++) {
        x[j]=(a[j][2]*a[j][4]-a[j][1]*a[j][5])/(a[j][0]*a[j][4]-a[j][1]*a[j][3]);
        y[j]=(a[j][0]*a[j][5]-a[j][2]*a[j][3])/(a[j][0]*a[j][4]-a[j][1]*a[j][3]);
    }
    for (j = 0; j < i; j++) {
        printf("%.3f %.3f\n",x[j],y[j]);
    }
    return 0;
}