#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    int a,b;
    
    scanf("%d %d" , &a ,&b);
    
    if(a>8 || b>8){
        puts(":(");
    }else{
        puts("Yay!");
    }

    return 0;

}
