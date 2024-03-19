#include <stdio.h>
int main(void){
    int x, y;
    
    scanf("%d%d", &x, &y);
    
    double d = (4*x-y)/2.0;
    
    //printf("%f\n", d);
    //printf("%f\n", d-(int)d);
    
    if(d-(int)d==0 && d>0){
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}
