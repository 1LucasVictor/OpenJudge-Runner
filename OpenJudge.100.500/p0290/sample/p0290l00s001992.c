#include <stdio.h>
#include <math.h>

int evaluation(double x, double y){
    int xInt, yInt, i;
    xInt = x;
    yInt = y;
    
    if(xInt == 2){
        return 1;
    }
    for(i = 2; i < yInt + 1; i++){
        if(xInt % i == 0){
            break;
        }
    }
    if(i == yInt + 1){
        return 1;
    }else{
        return 0;
    }
}

int main(void){
    int n;
    double x, y;
    int ans = 0;
    char order[101];
    
    fgets(order, 100, stdin);
    sscanf(order, "%d", &n);
    
    for(int i = 0; i < n; i++){
        fgets(order, 100, stdin);
        sscanf(order, "%lf", &x);
        y = sqrt(x);
        ans += evaluation(x, y);
    }
    
    printf("%d\n", ans);
    return 0;
}
