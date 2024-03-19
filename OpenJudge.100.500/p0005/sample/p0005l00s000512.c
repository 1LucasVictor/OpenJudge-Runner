#include<stdio.h>
int main(void){
    int i;
    char str[100]={0};
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){

    }
    for(i=i-1;i>-1;i--){
        printf("%c",str[i]);
    }
    puts("");
    return 0;
}