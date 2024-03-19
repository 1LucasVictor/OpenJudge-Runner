#include <stdio.h>

int main(void){
    char s[12],t[12];
    scanf("%s",s);
    scanf("%s",t);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]!=t[i]){
            printf("No\n");
            return 0;
        }
        i++;
    }
    printf("Yes\n");

    return 0;
}
