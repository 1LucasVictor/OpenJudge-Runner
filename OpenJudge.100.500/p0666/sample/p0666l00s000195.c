
#include <stdio.h>

int main () {

    int x,a,b;
    scanf("%d %d %d", &x, &a, &b);
    
    
    if(b-a <= 0)
    printf("delicious\n");
    
    else if(b-a <= x)
    printf("safe\n");
    
    else 
    printf("dengerous\n");
    
    return 0;
    
    }