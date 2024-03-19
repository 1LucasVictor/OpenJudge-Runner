#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int n;
    double d;
    
    scanf("%lf%d",&d,&n);
    
    printf("%.0lf\n",pow(100,d)*(double)n);
    return 0;
}
