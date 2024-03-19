#include <unistd.h>

int main()
{
    char buf[4] = {0};  // 入力バッファ（0で初期化）
    int N = 0;      // 入力された数値

    int len = 0;        // 入力された文字列の長さ
    int rank = 1;       // 位

    // 標準入力から4バイト読み込みバッファに格納
    read(0, buf, 4);

    // 入力された文字列の長さをはかる
    for (int i = 1; i < 4; i++) {
        if (buf[i] != 0) {
            len++;
        }
    }

    // Nに入力された数値を格納
    for (int i = len; i > 0; i--) {
        N += (int)((buf[i-1] - 0x30) * rank);   // 文字'0'はASCIIで0x30のため
        rank = rank * 10;
    }

    // 本題
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (N == (i * j)) {
                write(1, "Yes\n", 4);
                return 0;
            }
        }
    }

    write(1, "No\n", 3);

    return 0;
}