//======================================================================
// Contents    : AOJ ITP1_8_B
//               与えられた数の各桁の和を計算
// Input       : 複数の整数x
// Output      : x の各桁の和
// Constraints : x は 1000 桁以下の整数
// Author      : 廣部智也
// LastUpdate  : 2020/07/24
// Since       : 2020/07/24
//======================================================================

#include <stdio.h>

int digit_sum( char str, int sum, int *n );

int main(){

    char str = 'A';

    int sum = 0;

    int m = 0;
    
    int *n = &m;

    while( 1 ){
        
        scanf("%c", &str );

        if( str == '\n' && sum == 0 && *n == 1 ){
            break;
        }
        else{
            sum = digit_sum( str, sum, n );
        }
        
//        printf("%d\n", *n ); //確認用
    }
    
    return 0;
}



int digit_sum( char str, int sum, int *n ){
    
    if( str >= '0' && str <= '9' ){
        sum = sum + (str - '0');
        *n = 1;
    }
    else if ( str == '\n' ){
        printf("%d\n", sum);
        sum = 0;
        n = 0;
    }

    return sum;
}

