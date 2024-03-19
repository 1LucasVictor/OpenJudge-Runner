#include<stdio.h>
int main(void){
    char s[100];
    char t[100];
    int count=0;
    int i=0;
    scanf("%s",s);
    scanf("%s",t);
    while(s[i]!='\0'){
        if(s[i]!=t[i]){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}