/* ABC-132A.c
   Yuta Takayanagi */

#include<stdio.h>
#define SIZE 5
int main(void){
    char string[SIZE], char1, char2;
    int check, i;

    check = 0;

    scanf( "%s" , string);

    char1 = string[0];

    for(i=0; i < SIZE-1; i++){
        if(char1==string[i]){

            check++;

        }else{

            char2 = string[i];

        }

    }

    if(check!=2){

        printf( "NO\n" );
        return 0;

    }

    check = 0;

    for(i=0; i < SIZE-1; i++){
        if(char2==string[i]){

            check++;

        }

    }

    if(check!=2){

        printf( "NO\n" );
        return 0;

    }

    printf( "Yes\n");

    return 0;
}