#include<stdio.h>

int main(void){
    
    char ch, ch_out;
    
    while(1){
        scanf("%c",&ch);
        
        if(ch=='\n')
            break;
        if(ch>='a' && ch<='z'){
            ch_out= ch + 'A' -'a';
        }else if(ch>='A' && ch<='Z'){
            ch_out= ch + 'a' -'A';
        }else{
            ch_out=ch;
        }
        printf("%c",ch_out);
    }printf("\n");
    return 0;
}