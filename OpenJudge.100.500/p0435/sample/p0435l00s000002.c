#include <stdio.h>
#include <math.h>

int main(){
    int n, d, x, y, cont = 0;
    
    scanf(" %d %d", &n, &d);
    
    for(int i = 0; i < n; ++i){
        scanf(" %d %d", &x, &y);
        
        if(sqrt(pow(x,2) + pow(y,2)) <= d)
            ++cont;
    }
    
    printf("%d", cont);


    return 0;
}
