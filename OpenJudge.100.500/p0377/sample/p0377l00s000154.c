
#include <stdio.h>

#define MAX_CARD_NUMBER 13        //カードに表記される数字の最大数
#define MAX_MARK_NUMBER 4          //マークの種類数
#define S 0                                             //スペード(S)は0
#define H 1                                             //ハート(H)は1
#define C 2                                             //クローバー(C)は2
#define D 3                                             //ダイヤモンド(D)は3
#define NO_EXIST 0                              //カードなし
#define EXIST 1                                     //カードあり

int main(void)
{
    int aiMarksNumbers[MAX_MARK_NUMBER][MAX_CARD_NUMBER + 1];  //カード存在判定結果を格納する二次元配列
                                                                                                                            // カードなし：NO_EXIST、カードあり：EXISTを格納する
    int iInputNumber;                                //カードの数字
    int iCardsNumber;                              //所持カードの枚数
    int iMarkCount;                                   //カウントアップ変数
    int iNumberCount;                              //トランプの数字1-13のカウントアップ変数
    char chInputMark;                              //カードのマーク

    //所持カード枚数の初期化
    iCardsNumber = 0;
    //所持カードの枚数を標準入力
    scanf("%d", &iCardsNumber);

    //カードの数字を初期化
    iInputNumber = 0;
    //カード存在判定結果を格納する二次元配列を初期化
    for (iMarkCount = 0; iMarkCount < MAX_MARK_NUMBER; iMarkCount++)
    {
        for (iNumberCount = 1; iNumberCount <= MAX_CARD_NUMBER; iNumberCount++)
        {
            aiMarksNumbers[iMarkCount][iNumberCount] = 0;
        }
    }

    //カード存在判定結果をaiMarksNumbersに格納
    for (iNumberCount = 0; iNumberCount < iCardsNumber; iNumberCount++)
    {
        //szInputMark:マークの頭文字とiInputNumber:カードの数字の標準入力
        scanf(" %c %d", &chInputMark, &iInputNumber);

        //存在するならEXISTを代入する
        switch (chInputMark)
        {
        case 'S':
            aiMarksNumbers[S][iInputNumber] = EXIST;
            break;

        case 'H':
            aiMarksNumbers[H][iInputNumber] = EXIST;
            break;

        case 'C':
            aiMarksNumbers[C][iInputNumber] = EXIST;
            break;

        case 'D':
            aiMarksNumbers[D][iInputNumber] = EXIST;
            break;

        default:
            break;
        }
    }

    //足りないカードを出力
    for (iMarkCount = 0; iMarkCount < MAX_MARK_NUMBER; iMarkCount++)
    {
        for (iNumberCount = 1; iNumberCount <= MAX_CARD_NUMBER; iNumberCount++)
        {
            //あるマークである番号のカードがないなら出力
            if (aiMarksNumbers[iMarkCount][iNumberCount] == NO_EXIST)
            {
                switch (iMarkCount)
                {
                case S:
                    printf("S %d\n", iNumberCount);
                    break;

                case H:
                    printf("H %d\n", iNumberCount);
                    break;

                case C:
                    printf("C %d\n", iNumberCount);
                    break;

                case D:
                    printf("D %d\n", iNumberCount);
                    break;

                default:
                    break;
                }
            }
        }
    }
    return 0;
}

