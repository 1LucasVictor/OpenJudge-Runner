#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int a, b, c;
    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;

    if(a == 7){
        printf("Yes");
        return 0;
    } else if(b == 7){
        printf("Yes");
        return 0;
    }else if(c == 7){
        printf("Yes");
        return 0;
    }

    printf("No");
    return 0;
}