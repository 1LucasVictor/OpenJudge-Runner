#include<stdio.h>
#include<string.h>

int main(void){
    char str[1200];
    scanf("%[^\n]", str);
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 97 && str[i] <= 122) printf("%c", str[i]-32);
        else if(str[i] >= 65 && str[i] <= 90) printf("%c", str[i]+32);
        else printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
