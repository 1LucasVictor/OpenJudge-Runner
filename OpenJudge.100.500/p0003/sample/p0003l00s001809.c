#include<stdio.h>
#define N 15
int main() {
    double a[N][6],x[N],y[N],det[N];
    int i=0,X,Y;
    int j;
    while (scanf("%lf",&a[i][0])!=EOF) {
        for (j = 1; j < 6; j++) {
            scanf("%lf",&a[i][j]);
        }
        i++;
    }

    for (j = 0; j < i; j++) {
        det[j]=a[j][0]*a[j][4]+(-1)*a[j][1]*a[j][3];
        x[j]=a[j][2]*a[j][4]+(-1)*a[j][1]*a[j][5];
        y[j]=a[j][0]*a[j][5]+(-1)*a[j][2]*a[j][3];
    }
    for (j = 0; j < i; j++) {
        X=(int)(x[j]/det[j]);
        Y=(int)(y[j]/det[j]);
        printf("%.3f %.3f\n",(double)X,(double)Y);
    }
    return 0;
}