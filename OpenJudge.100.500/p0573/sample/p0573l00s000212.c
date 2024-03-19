/* ABC-132A.c
   Yuta Takayanagi */

#include<stdio.h>
#define SIZE 5
int main(void){
    char string[SIZE], char1, char2;
    int check, i;

    check = 0;

    scanf( "%s" , string); /* 入力 */

    char1 = string[0]; /* 比較する一文字を保存 */

    for(i=0; i < SIZE-1; i++){
        if(char1==string[i]){

            check++; /* 自分も含め、出てくる回数をカウント */

        }else{

            char2 = string[i]; /* 別に比較する一文字を保存 */

        }

    }

    if(check!=2){

        printf( "No\n" ); /* 出てくる回数が2でなければNOを出力 */
        return 0;

    }

    check = 0;

    for(i=0; i < SIZE-1; i++){
        if(char2==string[i]){

            check++; /* 自分も含め、出てくる回数をカウント */

        }

    }

    if(check!=2){

        printf( "No\n" ); /* 出てくる回数が2でなければNOを出力 */
        return 0;

    }

    printf( "Yes\n"); /* 2文字とも2回ずつ出てきた場合Yesを出力 */

    return 0;
}