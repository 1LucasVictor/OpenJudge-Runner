#include <stdio.h>
int main(void){
    int i,flg = 0;
    char s[20],t[20];
    scanf("%s", s);
    scanf("%s", t);
    for(i = 0;s[i] != '\0';i ++){
        if(s[i] != t[i]){
            flg = 1;
            break;
        }
    }
    if(flg == 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}