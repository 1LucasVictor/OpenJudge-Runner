#include <stdio.h>
int main(void){
    int a, b, c, count=0;
    scanf("%d %d %d", &a, &b, &c);
    
    for(; a<=b; a++){
        if(c%a == 0) count++;
    }
    printf("%d\n", count);
    
    return 0;
}

