#include <stdio.h>
#include <string.h>

int main(void){
    char s[10], t[11];

//入力
    scanf("%s %s", s, t);

    int num = strlen(s);

    for(int i=0 ; i < num ; i++){
        if(s[i] != t[i] || t[num] == '\0'){
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}