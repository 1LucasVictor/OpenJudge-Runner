#include <stdio.h>
int main(void){
    // Your code here!
    int a, b, c, d, e, f, g;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a < c){
        e = c;
    }else{
        e = a;
    }
    
    if(b < d){
        f = b;
    }else{
        f = d;
    }
    g = f - e;
    if(g > 0){
        printf("%d", g);
    }else{
        printf("%d", 0);
    }
   
    
}
