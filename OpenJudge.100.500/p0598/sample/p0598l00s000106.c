#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);
    
    if(b%a==0){
        printf("%d",a+b);
        
    }else{

        printf("%d", b-a);
    }
    
    
    

    return 0;

}
