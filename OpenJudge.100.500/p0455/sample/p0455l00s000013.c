#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d", &a);

    b = 1;

    for(int i = 0; i < a; i++){
        b = b*a;
        c = b*a;
    }

    printf("%d\n", a+b+c);
    return 0;
}
