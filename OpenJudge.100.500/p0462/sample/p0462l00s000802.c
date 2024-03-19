#include <stdio.h>
int main(void){
    double A,B,ans;
    long int intans;
    
    scanf("%lf",&A);
    scanf("%lf",&B);
    
    ans=A*B;
    
    intans=(long int)ans;
    
    
    printf("%ld\n",intans);
    
    return 0;
}