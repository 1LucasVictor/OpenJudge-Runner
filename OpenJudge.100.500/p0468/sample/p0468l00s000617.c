#include <stdio.h>
int main(void){
    char s[3];
    
    scanf("%c",&s[0]);
    scanf("%c",&s[1]);
    scanf("%c",&s[2]);
    
    if(s[1]=='B'){
        s[1]='R';
    }else{
        s[1]='B';
    }
    
    printf("%c%c%c\n",s[0],s[1],s[2]);
    
    return 0;
}