#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double d;
    double x,y;
    scanf("%d %lf",&n,&d);
    int cnt;
    cnt=0;
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&x,&y);
        //printf("%f",sqrt(x * x + y* y));
        if(d >= sqrt(x * x + y* y)){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
