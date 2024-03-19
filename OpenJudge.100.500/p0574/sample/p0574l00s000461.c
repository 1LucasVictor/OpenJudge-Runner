#include<stdio.h>
int main(void){
    char s[4];
    int i;
    scanf("%s",s);
    if(s[0]==s[1]){
        printf("Bad");
        return -1;
    }
    if(s[1]==s[2]){
        printf("Bad");
        return -1;
    }
    if(s[2]==s[3]){
        printf("Bad");
        return -1;
    }
    printf("Good");
    return 0;
}