#include <stdio.h>
void checkNum(int a, int b){
    int sum = a + b;
    if(sum % 2 == 0){
        printf("%d\n", sum / 2);
    }else {
        printf("IMPOSSIBLE");
    }
}

int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    checkNum(a, b);
    return 0;
}