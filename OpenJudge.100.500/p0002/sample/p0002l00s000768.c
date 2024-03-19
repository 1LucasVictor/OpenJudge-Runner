#include <stdio.h>
#include <math.h>

#define PI (M_PI)

int rightRectangle(double a, double b, double c) {
    double theta;
    int cnt=0;

    theta=acos((a*a+b*b-c*c)/(2*a*b))*180/PI;
    if ((int)theta==90) cnt++;
    theta=acos((c*c+a*a-b*b)/(2*c*a))*180/PI;
    if ((int)theta==90) cnt++;
    theta=acos((b*b+c*c-a*a)/(2*b*c))*180/PI;
    if ((int)theta==90) cnt++;

    if (cnt>0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int n, a, b, c, tmp;

    scanf("%d", &n);
    while (n>0) {
        scanf("%d %d %d", &a, &b, &c);
        tmp=rightRectangle(a, b, c);

        if (tmp==1) printf("YES\n");
        else printf("NO\n");
        n--;
    }

    return 0;
}

