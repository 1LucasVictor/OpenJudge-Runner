#include <stdio.h>

int main()
{
    int cards[4][13] = {0};
    int n, num, i, j;
    char mark;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d", &mark, &num);
        
        if (mark == 'S') {
            cards[0][num - 1] = 1;
        }
        else if (mark == 'H') {
            cards[1][num - 1] = 1;
        }
        else if (mark == 'C') {
            cards[2][num - 1] = 1;
        }
        else if (mark == 'D') {
            cards[3][num - 1] = 1;
        }
    }
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 13; j++) {
            if (cards[i][j] == 0){
                
                if (i == 0) {
                    printf("S %d\n", j + 1);
                }
                else if (i == 1) {
                    printf("H %d\n", j + 1);
                }
                else if (i == 2) {
                    printf("C %d\n", j + 1);
                }
                else if (i == 3) {
                    printf("D %d\n", j + 1);
                }
            }
        }
    }
    
    return 0;
}