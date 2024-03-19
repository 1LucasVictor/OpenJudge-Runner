#include<stdio.h>
#include<string.h>

int main(void){
    char str[11];
    char str2[11];
    scanf("%s", str);
    scanf("%s", str2);
    for(int i = 0; i < strlen(str);i++){
        if(str[i] != str2[i]){
            printf("No");
            return 0;
        }
    }
    if(strlen(str) + 1== strlen(str2)){
        printf("Yes");
    }else
    {
        printf("No");
    }
    return 0;
}