#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    int x,a,b;
    
    scanf("%d %d %d", &x, &a, &b);
    
    if(a>=b){
        printf("delicious");
    }else{
        
        if(b-a>=x+1){
            printf("dangerous");
        }else{
            printf("safe");
        }
        
    }
    
    
    return 0;

}
