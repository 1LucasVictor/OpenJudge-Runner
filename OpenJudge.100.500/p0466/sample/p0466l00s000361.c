#include<stdio.h>
#include <string.h>

int main(){
    char s[20], t[20];
    scanf("%s", s);
    scanf("%s", t);
    if(strlen(s)+1 != strlen(t)){
        printf("No\n");
        return 0;
    }
    for(int i = 0; i < strlen(s); i++){
        if(s[i]!=t[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
