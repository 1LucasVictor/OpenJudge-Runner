#include<stdio.h>
int main(void){
    int i,n;
    double x[4],y[4],ab,cd;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);
        ab=(y[0]-y[1])/(x[0]-x[1]);
        cd=(y[2]-y[3])/(x[2]-x[3]);
        if(ab==cd){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}