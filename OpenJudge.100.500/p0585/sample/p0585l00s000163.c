#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    double t;
    scanf("%d %d %lf",&a,&b,&t);
    
    int make = (t + 0.5) / a;
    printf("%d",b*make);
    
    return 0;
}