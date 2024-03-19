#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a <= 8 && b <= 8){
        printf("%s\n", "Yay!");
        return 0;
    }
    else {
    printf("%s\n", ":(");
    return 0; 
    }
}