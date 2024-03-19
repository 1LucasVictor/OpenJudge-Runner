#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    do{
        scanf("%c",&ch);
        if(ch>='a'&&ch<='z'){
            ch=ch-32;
        }else if (ch>='A'&&ch<='Z'){
            ch=ch+32;
        }
        printf("%c",ch);
        }while(ch!='\n');
    return 0;
}
