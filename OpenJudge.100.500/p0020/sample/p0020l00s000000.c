#include <stdio.h>
 
int main(){
    int n;
    double x1, x2, x3, x4, y1, y2, y3, y4, crs;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        
        crs = (x2 - x1) * (y4 - y3) - (x4 - x3) * (y2 - y1);
        
        if(crs < 0) crs *= -1;
        
        if(crs < 1e-10)
            printf("YES\n");
        else
            printf("NO\n");
    }
     
    return 0;
}