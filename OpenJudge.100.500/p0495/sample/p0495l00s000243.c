#include <stdio.h>
#include <string.h>

int main(void){
    // 変数宣言
    char judge[4];
    char s[4];
    char *p_judge;
    p_judge = judge;

    // 入力処理
    scanf( "%s", s );

    // 比較
    if( !(strcmp( "AAA", s )==0) && !(strcmp( "BBB", s )==0) ){
        p_judge = "Yes";
    }else{
        p_judge = "No";
    }

    // 出力
    printf( "%s", p_judge );
    

    return 0;
}