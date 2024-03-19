#include <stdio.h>
#include <stdlib.h>


int main(){
    int X, Y;
    scanf("%d%d", &X, &Y);
    int x = 2*X - Y/2; //つる
    int y = Y/2 - X; //かめ
    if(x<0 || y<0 || x+y!=X || 2*x+4*y!=Y){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

    return 0;
}


