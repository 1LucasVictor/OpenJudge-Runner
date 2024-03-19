#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    while(n--){
        int i;
        double x[5],y[5];
        for(i = 0; i < 4; i++){
            scanf("%lf%lf",&x[i],&y[i]);
        }
        if(x[0] == x[1] && x[2] == x[3])puts("YES");
        else if(y[0] == y[1] && y[2] == y[3])puts("YES");
        else if((y[0]-y[1])/(x[0]-x[1]) == (y[2]-y[3])/(x[2]-x[3]))puts("YES");
        else puts("NO");
    }
    return 0;
}