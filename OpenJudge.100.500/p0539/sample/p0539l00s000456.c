#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int result;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            result = i*j;
            if (result == n) {
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}
