#include <stdio.h>

int main(){
    
    int x, y;
    
    scanf("%d%d", &x, &y);
    
    if(y >= 2*x && y <= 4*x && y%2 == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}