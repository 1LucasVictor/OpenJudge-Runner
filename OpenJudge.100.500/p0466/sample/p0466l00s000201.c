#include <stdio.h>
#include <string.h>
int main(void){
    char s[11],t[11];
    scanf("%s",s);
    scanf("%s",t);
    if(strlen(s)+1!=strlen(t)){
        printf("No");
        return 0;
    }
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]!=t[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}