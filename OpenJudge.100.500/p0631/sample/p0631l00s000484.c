
#include <stdio.h>

int main(void){
    int a, b, x;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);
    
    if(a < x && x <= a + b)
        printf("YES \n");
    else
        printf("NO \n");
    
    return 0;
}
