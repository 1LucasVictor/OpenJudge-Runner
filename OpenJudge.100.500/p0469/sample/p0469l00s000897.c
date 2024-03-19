#include <stdio.h>

int main(void){

    int K = 0;
    int A = 0;
    int B = 0;
    int flag = 0;
    scanf("%d", &K);
    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++){
        if (i % K == 0){
            flag = 1;
        }
    }

    if (flag == 1){
        printf("OK\n");
    } else {
        printf("NG\n");        
    }


    return 0;
}