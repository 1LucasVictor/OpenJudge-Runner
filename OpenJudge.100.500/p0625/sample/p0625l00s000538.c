#include <stdio.h>

int main (){

    int a, b;

    scanf("%d %d", &a, &b);

    if (a+b>16){
        printf("):\n");
    }
    if (a>8 || b>8){
        printf("):\n");
    }
    else {
            printf("Yay!\n");
    }
    return 0;

}
