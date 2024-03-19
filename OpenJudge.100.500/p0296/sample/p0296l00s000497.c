/*
制約
2 ≤ 式に含まれるオペランドの数 ≤ 100
1 ≤ 式に含まれる演算子の数 ≤ 99
演算子は +、-、* のみを含み、１つのオペランドは10^6 以下の正の整数
-1 × 10^9 ≤ 計算途中の値 ≤ 10^9
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char line[1024] = {0};
    int stack[101] = {0};
    char operand[8] = {0};
    int j = 0;
    int k = 0;
    
    fgets( line, sizeof(line), stdin);
    
    for ( int i = 0; i < strlen(line); i++ ) {
        //printf("line[%d]=%c\n", i, line[i]);
        // オペランド
        if ( ('0' <= line[i]) && (line[i] <= '9') ) {
            operand[j] = line[i];
            j++;
        } else {
            // オペランドの確定
            if ( operand[0] != 0 ) {
                stack[k] = atoi(operand);
                k++;
                memset( operand, 0, sizeof(operand) );
                j = 0;
            }
            // 演算子のとき
            if ( line[i] != ' ' ) {
                //printf("%d %c %d = ", stack[k - 2], line[i], stack[k - 1]);
                switch ( line[i] ) {
                    case '+':
                        stack[k - 2] += stack[k - 1];
                        break;
                    case '-':
                        stack[k - 2] -= stack[k - 1];
                        break;
                    case '*':
                        stack[k - 2] *= stack[k - 1];
                        break;
                    case '/':
                        stack[k - 2] /= stack[k - 1];
                        break;
                }
                //printf("%d\n", stack[k - 2]);
                stack[k] = 0;
                k--;
            }
        }
        /*printf("stack:");
        if ( stack[0] != 0 ) {
            for ( int l = 0; l < k; l++ ) {
                printf("%d", stack[l]);
                if ( l == k - 1 ) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        } else {
            printf("null\n");
        }
        */
    }
    
    printf("%d\n", stack[0]);
    
    return 0;
}
