#include<stdio.h>

int main(void){
    char ch[3];
    scanf("%s",ch);
    if (ch[0]=='A' && ch[1] == 'B' && ch[2] == 'C')
        printf("ARC");
    if (ch[0]=='A' && ch[1] == 'R' && ch[2] == 'C')
        printf("ABC");
        
    return 0;
}