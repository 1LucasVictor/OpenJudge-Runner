#include <stdio.h>

#define MAX (20)

int main(){

    int a, b;    

    // 値の入力
    scanf("%d %d", &a, &b);

    if((b%a) == 0){
        printf("%d", a+b);
    }
    else{
        printf("%d", b-a);
    }

}