#include<stdio.h>
#include<ctype.h>
int main(){
    int i, n;
    char moji;

    for(;;){
        scanf("%c", &moji);
        if( moji == '\n' ){
          break;
        }
        else if( islower( moji )){
            moji = toupper( moji );
        }else if( isupper( moji )){
            moji = tolower( moji );
        }
        printf("%c", moji);
    }
            printf("\n");
    return 0;
}