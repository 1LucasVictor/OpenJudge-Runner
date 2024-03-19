#include <stdio.h>

int main(void);

int main(void)
{
    int n, i, j, num, ln;
    char mark;
    int cards[4][14];//絵柄と数字の組を入れる配列

    for(i = 0; i < 4; i++){//52枚のカードを配列に入れる
        for(j = 0; j < 14; j++){
            cards[i][j] = 0;
        }
    }

    scanf("%d", &n);//太郎が持っているカードの枚数を読み込む
    for(i = 0; i < n; i++){
        scanf("%c", &ln);//前の行の改行を読み込む
        scanf("%c %d", &mark, &num);//i行目の絵柄と数字の組を読み込む
        if(mark == 'S'){//読み込んだ絵柄がSだったとき、配列cardsに入れ、1を代入する
            cards[0][num] = 1;
        }
        else if(mark == 'H'){
            cards[1][num] = 1;
        }
        else if(mark == 'C'){
            cards[2][num] = 1;
        }
        else if(mark == 'D'){
            cards[3][num] = 1;
        }
    }

    for(j = 1; j < 14; j++){
        if(cards[0][j] != 1){//配列cardsが1でないということは読み込まれていないカードの組
        printf("S %d\n", j);
        }
    }
    for(j = 1; j < 14; j++){
        if(cards[1][j] != 1){
        printf("H %d\n", j);
        }
    }
    for(j = 1; j < 14; j++){
        if(cards[2][j] != 1){
        printf("C %d\n", j);
        }
    }
    for(j = 1; j < 14; j++){
        if(cards[3][j] != 1){
        printf("D %d\n", j);
        }
    }
    return(0);
}
