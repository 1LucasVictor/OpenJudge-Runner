#include<stdio.h>
int main(){
    char c;
    while(1){
        scanf("%c",&c);
        if(c>='a' && c <= 'z'){
            printf("%c",c-32);
        }else if(c>='A' && c <= 'Z'){
            printf("%c",c+32);
        }else{
            printf("%c",c);
        }
        if(c == '\n') break;
    }
}
