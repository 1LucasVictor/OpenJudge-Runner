#include <stdio.h>
int main(void){
    
    int n;
    int a;
    int b;
    int d;
    
    scanf("%d%d%d", &n, &a, &b);
    
    d = a * n;
    
    if(d<b){
        
        printf("%d", d);
        return 0;
        
    }
    
    printf("%d", b);
    return 0;
    
}
