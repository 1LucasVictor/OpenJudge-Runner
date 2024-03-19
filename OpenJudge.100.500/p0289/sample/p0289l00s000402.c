#include <stdio.h>

int research(int x, int y){
    int n;
    while(1){
        n = x % y;
        x = y;
        y = n;
        if(x % y == 0){
            return y;
        }
    }
}
int main(void){
    int x, y, z;
    scanf("%d %d", &x, &y);
    if(x > y){
        z = research(x, y);
    }else if(y > x){
        z = research(y, x);
    }else{
        z = x;
    }
    printf("%d\n", z);
    return 0;
}

