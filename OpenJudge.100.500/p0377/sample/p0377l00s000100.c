#include <stdio.h>

int main(void)
{
    int n, i, j;
    char ch;
    char kind;
    char kinda[4] = {'S', 'H', 'C', 'D'};
    int nums;
    int cards[4][13];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            cards[i][j] = 0;
        }
    }
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%c", &ch);
        scanf("%c %d", &kind, &nums);
        for(j = 0; j < 4; j++){
            if(kind == kinda[j]){
                cards[j][nums - 1] = 1;
                break;
            }
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            if(cards[i][j] == 0){
                printf("%c %d\n", kinda[i], j + 1);
            }
        }
    }

    return 0;
}
