#include <stdio.h>
 
int main(void) {
    int max;
    int i;
    int j;
    double x[4];
    double y[4];
    scanf("%d",&max);
    for(i=0;i<max;i++) {
        for(j=0;j<4;j++)scanf("%lf %lf",&x[j],&y[j]);
        if(x[0]==x[1]) {
            if(x[2]==x[3])printf("YES\n");
            else printf("NO\n");
        } else if(x[2]==x[3])printf("NO\n");
        else {
            if((y[1]-y[0])/(x[1]-x[0])==(y[3]-y[2])/(x[3]-x[2]))
                printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}