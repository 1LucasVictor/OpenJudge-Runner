#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int train[100];
    int now_train;
    int tmp = 0;
    
    while (scanf("%d", &now_train) != EOF){
        if (now_train != 0){
            train[tmp] = now_train;
            tmp++;
        }
        else {
            printf("%d\n", train[tmp - 1]);
            tmp--;
            train[tmp] = 0;
        }
    }
    return 0;
}