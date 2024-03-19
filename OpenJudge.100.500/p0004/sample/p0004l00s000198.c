#include <stdio.h>
#include <math.h>

int GCD(int x, int y){
    int temp;
    if(x <= y){
        temp = x;
        x = y;
        y = temp;
    }
    
    if(y == 0) return x;
    else{
        temp = y;
        y = x % y;
        x = temp;
        return GCD(x, y);
    }
}

int LCM(int x, int y, int gcd){
    return x / gcd * y;
}
        
int main(void){
  
    //int n, i;
    int a, b;
    
    while(scanf("%d %d", &a, &b) == 2){
        printf("%d %d\n", GCD(a, b), LCM(a, b, GCD(a,b)));
    }
    return 0;
    
}