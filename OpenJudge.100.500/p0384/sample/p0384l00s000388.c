#include<stdio.h>
#include<string.h>

int main(void){
    int sa = 'a' - 'A';
    char str[1200];
    scanf("%[^\n]", str);
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z') printf("%c", str[i]-sa);
        else if(str[i] >= 'A' && str[i] <= 'Z') printf("%c", str[i]+sa);
        else printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
