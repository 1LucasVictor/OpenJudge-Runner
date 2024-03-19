#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    int i;
    int out = 0;
    scanf("%d %d", &x, &y);
    for (i = 0; i <= x; i++){
        if ((i * 2 + (x - i) * 4) == y){
            out = 1;
            break;
        }
    }
    if (out == 1){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}