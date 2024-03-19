#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int d, n;
    double a;
    
    scanf("%d%d",&d,&n);
    
    a=pow(100,d)*n;
    printf("%.0lf\n",a);
    return 0;
}