#include<stdio.h>
#include <string.h>

int main()
{
    char card[2];
    int i, j, taro, mark, number, str[4][13] = { 0 };
    scanf("%d", &taro);
    for (i = 0; i<taro ; i++){
        scanf("%s %d", card, &number);
        if (strcmp(card,  "S") == 0){ mark = 0; }
        else if (strcmp(card, "H") == 0){ mark = 1; }
        else if (strcmp(card, "C") == 0){ mark = 2; }
        else if (strcmp(card, "D") == 0){ mark = 3; }
        str[mark][number - 1] = 1;
    }

    for (i = 0; i<4; i++){
        for (j = 0; j<13; j++){
            if (str[i][j] == 0){
                if (i == 0){ mark = 'S'; }
                else if (i == 1){ mark = 'H'; }
                else if (i == 2){ mark = 'C'; }
                else if (i == 3){ mark = 'D'; }
                printf("%c %d\n", mark, j + 1);
            }
        }
    }
    return 0;
}