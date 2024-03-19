#include <stdio.h>
int main(void){
    // Your code here!
    int a, b, x;
    
    scanf("%d",&x);
    
    a=x/500*1000;
    b=x%500/5*5;
    printf("%d\n",a+b);
    return 0;
}