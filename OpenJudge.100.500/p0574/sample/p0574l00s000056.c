#include<stdio.h>
int main(void) {
    char s[5];
    scanf("%s",s);
    int i, flag;
    flag = 1;
    for(i = 0; i < 3; i++) {
        if(s[i]==s[i+1]) {
            flag = 0;
        }
    }
    if(flag == 1) {
        printf("Good\n");
    } else {
        printf("Bad\n");
    }
    return 0;
}