//たてH cm よこ W cm の枠を描くプログラム
#include <stdio.h>

int main(void)
{
    //変数定義
    int iHeight;        //縦の長さ
    int iWidth;         //横の長さ
    int iHeightCount;   //縦の長さカウンタ
    int iWidthCount;    //横の長さカウンタ

    //変数の初期化
    iHeight = 1;
    iWidth = 1;

    
    while (iHeight != 0 && iWidth != 0)
    {
        //Input:縦 横
        scanf("%d %d",&iHeight,&iWidth);

        //入力データ: 0 0の時はbreak
        if (iHeight == 0 && iWidth == 0)
        {
            break;
        }

        //for:縦の長さが入力したデータと一致するまでループ
        for (iHeightCount = 1; iHeightCount <= iHeight; iHeightCount++)
        {
             //for:横の長さが入力したデータと一致するまでループ
             for (iWidthCount = 1; iWidthCount <= iWidth; iWidthCount++)
             {
                //if:行末なら#と改行を出力する
                if (iWidthCount == iWidth)
                {
                    printf("#\n");
                }
                //else if:開始行または終了行または行頭であれば'#'を出力する
                else if (iHeightCount == 1 || iHeightCount == iHeight || iWidthCount == 1)
                {
                    printf("#");
                }
                //else:'.'を出力する
                else
                {
                    printf(".");
                }
             }
        }
        //入力データごとに改行する。
        printf("\n");
    }
    
    return 0;
}
