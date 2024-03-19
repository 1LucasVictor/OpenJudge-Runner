#include<stdio.h>

int main() {
    
    int x, y, i, temp;
    int d = 0;
    
    scanf("%d %d", &x, &y);
    
    if (x < y){
        temp = x;
        x = y;
        y = temp;
    }
        
    for(i = y; i > 1; i--){
        if(y % i == 0){
            if(x % i == 0){
                d = i;
                break;
            }
        }
    }
    printf("%d\n", d);
}