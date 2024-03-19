#include <stdio.h>
int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a * 4 >= b && a * 2 <= b){
        printf("Yes");
    }else{
        printf("No");
    }
    
}