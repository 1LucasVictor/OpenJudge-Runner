#include <stdio.h>
#include<string.h>
#include <ctype.h>

int main(void){
    char ch;
    while(1){
        scanf("%c", &ch);
        //????????????"while"????????????
        if( ch == '.' ){
            printf(".\n");
            break;
        }else if( islower(ch)){
            printf("%c",toupper(ch));
        }else if(isupper(ch)){
            printf("%c", tolower(ch));
        }else{
            printf("%c",ch);
        }
    }
    return 0; /*0?????????*/
}  