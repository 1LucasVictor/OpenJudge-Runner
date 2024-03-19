#include <stdio.h>

int main(void){
    // Your code here!
    int x;
    scanf("%d",&x);
    
    int res = x + x*x + pow(x,3);
    printf("%d\n",res);
}
