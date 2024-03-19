#include<stdio.h>
#include<math.h>
int main(void){
    int n;
    double d;
    scanf("%d %lf",&n,&d);
    double x[n];
    double y[n];
    double D;
    int count=0;
    for(int i=0;i<n;++i){
        scanf("%lf %lf",&x[i],&y[i]);
    }
    for(int i=0;i<n;++i){
        D=sqrt(((x[i]*x[i])+(y[i]*y[i])));
        if(D<=d){
            ++count;
        }
    }
    printf("%d\n",count);
    return 0;
}