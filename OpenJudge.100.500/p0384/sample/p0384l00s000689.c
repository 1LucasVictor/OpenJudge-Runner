#include <stdio.h>

void sw_char(char ch){

}

int main(){
char ch;
while(1){
scanf("%c", &ch);

if(ch>=97&&ch<=122){
ch = ch - 32;
}else if(ch >= 65&&ch<=90){
ch = ch + 32;
}

printf("%c", ch);

if(ch == '\n') break;
}
return 0;
}
