#include <stdio.h>
#include <string.h>
int main(void){
    char s[200000],t[200000];
    int cnt=0;
    scanf("%s",s);
    scanf("%s",t);
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=t[i]) cnt++;
    }
    printf("%d",cnt);
    return 0;
}