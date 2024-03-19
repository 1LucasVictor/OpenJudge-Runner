#include <stdio.h>
int main(void){
    int i, j, n, dummy; //nは持っているトランプの枚数
    char mark;
    int num; //numは持っているトランプのランク（トランプ上の数字）
    char marks[4] = {'S', 'H', 'C', 'D'};
    int cards[4][13] = {0};

    scanf("%d", &n);
    scanf("%d", &dummy);

    for(i = 1; i <= n; i++){
        scanf("%c %d ", &mark, &num);
        for(j = 0; j < 4; j++){
            if(mark == marks[j]){
                cards[j][num - 1] = 1;
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            if(!cards[i][j]) printf("%c %d\n", marks[i], j + 1);
        }
    }
    return 0;
}
