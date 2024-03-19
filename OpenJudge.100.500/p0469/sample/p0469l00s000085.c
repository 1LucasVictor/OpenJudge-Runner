#include <stdio.h>

int main(void){
    int k, a, b;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);

    for(int i = a;i <= b;i++){
        if(i % k == 0){
            printf("OK\n");
            return 0;
        }
    }

    printf("NG\n");

    return 0;
}