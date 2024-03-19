#include <stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(8 < a || 8 < b){
        printf(":(\n");
    }else{
        printf("Yay!\n");
    }
    return 0;
}