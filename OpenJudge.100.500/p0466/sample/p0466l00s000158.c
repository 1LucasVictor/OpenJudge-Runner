/* 167a.c */
#include <stdio.h>

int main(void){
    char s[11];
    char t[12];
    int i=0;
    int count=0;
    scanf("%s %s",&s,&t);
    while(s[i]!='\0'){
        if(s[i]!=t[i]){
            count=1;
            break;
        }
        i++;
    }
    if(count==1){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}