#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 文字列strに対して以下の命令に沿って操作する
// ・print a b: strのaからb文字目を出力
// ・reverse a b: strのaからb文字目までを逆順変換
// ・replace a b p: strのaからb文字目までをpに置換

int main() {
    char szInputStr[1000];  // 入力文字列
    char szOp[10];          // 命令
    int iNumOfOP;           // 命令数
    int iCount;             // カウント変数
    int iCount2;            // カウント変数2
    int iCount3;            // カウント変数3
    int iArgA;              // 命令の引数a
    int iArgB;              // 命令の引数b
    char szArgP[1000];      // 命令の引数p
    char chSwapTmp;         // 逆順スワップ時のテンポラリ

    // In: 文字列str, 命令数
    scanf("%s", szInputStr);
    scanf("%d", &iNumOfOP);

    for (iCount = 0; iCount < iNumOfOP; iCount++) {
        // In: OP
        scanf("%s", szOp);
        // In: Arg a b
        scanf("%d %d", &iArgA, &iArgB);
        // opによって処理を変える
        if (strcmp(szOp, "print") == 0) {    // op: print
            // iArgAからiArgBまでを出力
            for (iCount2 = iArgA; iCount2 <= iArgB; iCount2++) {
                printf("%c", szInputStr[iCount2]);
            }
            printf("\n");
        }
        else if (strcmp(szOp, "replace") == 0) {    // op: replace
            // In: Arg p
            scanf("%s", szArgP);
            // iArgAからiArgBまでを置換
            for (iCount2 = iArgA, iCount3 = 0; iCount2 <= iArgB; iCount2++, iCount3++) {
                szInputStr[iCount2] = szArgP[iCount3];
            }
        }
        else if (strcmp(szOp, "reverse") == 0) {    // op: reverse
            // iArgAからiArgBまでを逆順変換
            while (iArgA < iArgB) {
                chSwapTmp = szInputStr[iArgA];
                szInputStr[iArgA] = szInputStr[iArgB];
                szInputStr[iArgB] = chSwapTmp;
                iArgA++;
                iArgB--;
            }
        }
    }

    return 0;
}
