#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    if (a < 10 && b < 10){
        result = a * b;
    }
    else{
        result = -1;
    }
    printf("%d", result);
    return 0;
}
