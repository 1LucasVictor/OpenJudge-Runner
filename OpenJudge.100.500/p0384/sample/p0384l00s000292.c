#include<stdio.h>

int main(void){
    char ch;
    
    while(1){
        scanf("%c",&ch);
        if(ch=='\n'){
            printf("%c",ch);
            break;
        }else{
            if('a'<=ch&&ch<='z'){
                ch-='a'-'A';
                printf("%c",ch);
            }else if('A'<=ch&&ch<='Z'){
                ch+='a'-'A';
                printf("%c",ch);
            }else{
                printf("%c",ch);
            }
        }
    }
    
    return 0;
}
