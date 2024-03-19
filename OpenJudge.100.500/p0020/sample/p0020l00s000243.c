#include <stdio.h>

int main(void){
    int n,i,j;
    double x[4], y[4];
    double ab, cd;
    
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(j=0; j<4; j++)
            scanf("%lf%lf", &x[j], &y[j]);
        ab = (y[1]-y[0]) / (x[1]-x[0]);
        cd = (y[3]-y[2]) / (x[3]-x[2]);
        if(ab == cd) printf("YES\n");	//傾きが等しければ平行
        else printf("NO\n");
    }
    return 0;
}
