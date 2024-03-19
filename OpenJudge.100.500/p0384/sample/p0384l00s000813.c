//======================================================================
// Contents    : AOJ ITP1_8_A
//               与えられた文字列の小文字と大文字を入れ替える
// Input       : 文字列を1行に与える
// Output      : 与えられた文字列の小文字と大文字を入れ替えた文字列
// Constraints : 入力される文字列の長さ < 1200
//               アルファベット以外の文字はそのまま出力
// Author      : 廣部智也
// LastUpdate  : 2020/07/23
// Since       : 2020/07/13
//======================================================================

#include <stdio.h>

void Upper_lower_change( char str );

int main(){

    char str = 'A';

    while(1){
        scanf("%c", &str );

        if ( str == '\n' ){
            break;
        }
        
        Upper_lower_change( str );
        
    }

    printf("\n");
    
    return 0;
}



void Upper_lower_change( char str ){
    
    if( str >= 'a' && str <= 'z' ){
        str = str - ('a' - 'A');
    }
    else if( str >= 'A' && str <= 'Z' ){
        str = str + ('a' - 'A');
    }

    printf("%c", str );
    
    return;
}

