#include <stdio.h>

int main(void){
    int N;
    int flag = 0;
    scanf("%d", &N);
    int A[9][9];
    for (int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            A[i - 1][j - 1] = i * j;
            if(N == A[i - 1][j - 1]){
                puts("Yes");
                flag = 1;
            }
            if(flag){
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(!flag){
        puts("No");
    }

    return 0;
}