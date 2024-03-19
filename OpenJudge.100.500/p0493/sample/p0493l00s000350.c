#include <stdio.h>
int main(void){
    // Your code here!
    int X,n500,n5,h;
    
    scanf("%d",&X);
    n500=X/500;
    n5=(X-(500*n500))/5;
    h=(n500*1000)+(n5*5);
    printf("%d\n",h);
    return 0;
}