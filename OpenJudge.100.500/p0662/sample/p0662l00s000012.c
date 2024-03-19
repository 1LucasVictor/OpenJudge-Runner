#include <stdio.h>

int main(){
    int a, b, c, d, x, y;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(b>=d)
        y = d;
    else
        y = b;
        
    if(a>=c)
        x = a;
    else
        x = c;
        
    printf("%d\n", y-x);
    
    return 0;
}
