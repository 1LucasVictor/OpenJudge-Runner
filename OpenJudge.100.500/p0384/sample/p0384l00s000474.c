#include<stdio.h>

#define STRING_SIZE_MAX 1200

#define COUNT_RESET 0

#define BOTH_LARGE_SMALL 32

#define RETURN 0

int main(){

        unsigned char usW_D_str[STRING_SIZE_MAX];        /* 文字列配列 */

        unsigned short usW_C_i;                          /* ループ変数 */

        

        /* 配列の初期化 */

        for(usW_C_i = COUNT_RESET;usW_C_i < STRING_SIZE_MAX;usW_C_i++){

                usW_D_str[usW_C_i] = '\0';

        }

        

        /* 文字列の入力 */

        for(usW_C_i = COUNT_RESET;usW_C_i < STRING_SIZE_MAX;usW_C_i++){

                scanf("%c", &usW_D_str[usW_C_i]);

                /* 入力終了処理 */

                if(usW_D_str[usW_C_i] == '\0'){

                        break;

                }

        }

        

        /* 大文字⇔小文字の変換 */

        for(usW_C_i = COUNT_RESET;usW_C_i < STRING_SIZE_MAX;usW_C_i++){

                /* 大文字から小文字の変換 */

                if(('A' <= usW_D_str[usW_C_i]) && (usW_D_str[usW_C_i] <= 'Z')){

                        usW_D_str[usW_C_i] += BOTH_LARGE_SMALL;

                }

                /* 小文字から大文字の変換 */

                else if(('a' <= usW_D_str[usW_C_i]) && (usW_D_str[usW_C_i] <= 'z')){

                        usW_D_str[usW_C_i] -= BOTH_LARGE_SMALL;

                }

                else;

        }

        

        /* 変換済み文字列の出力 */

        for(usW_C_i = COUNT_RESET;usW_D_str[usW_C_i] != '\0';usW_C_i++){

                printf("%c", usW_D_str[usW_C_i]);

        }

        

        return RETURN;

}
