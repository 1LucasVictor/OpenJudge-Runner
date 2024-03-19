#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    
    while(1) {
        scanf("%c", &ch);
        if(ch=='\n'){
          break;
        }
        if(islower(ch)){
            printf("%c", toupper(ch));  //chが小文字なら大文字を返す
        }
        else if(isupper(ch)){
             printf("%c", tolower(ch));  //chhが大文字なら小文字を返す
        }
        else printf("%c", ch);   //それ以外の文字はそのまま印字
        
    }
    printf("\n");
    return 0;
}


