#include <stdio.h>
#include <string.h>

int main(void){
    char s[201],t[201];
    int n,i,h;
    
    while(1){
        scanf("%s",s);
        if(strcmp(s,"-") == 0) break;
        scanf("%d",&n);
        for(i = 0; i < n; i++){
            scanf("%d",&h);
            strcpy(t,s+h);
            strncat(t,s,h);
            strcpy(s,t);
        }
        printf("%s\n",s);
    }
}