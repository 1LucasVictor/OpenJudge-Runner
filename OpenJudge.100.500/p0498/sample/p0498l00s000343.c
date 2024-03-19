#include <stdio.h>
int main(void){
    int i = 0, cnt = 0;
    int n;
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("%d", n/2);
    }
    else{
        printf("%d", n/2 + 1);
    }
}
