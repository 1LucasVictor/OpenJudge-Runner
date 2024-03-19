#include <stdio.h>

int main(){

    int N = 0;

    scanf("%d", &N);

    for (int i = 9; i > 4; i--){
        if ((N % i) == 0){
            if ((N / i) < 10){
                printf("Yes\n");
                break;
            } else {
                printf("No\n");
            }
        }
    }

    return 0;
}