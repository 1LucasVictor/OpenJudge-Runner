#include <stdio.h>
#include <string.h>
int main() {
    char s[3];
    scanf("%s", s);
    if(!strcmp(s,"AAA")){
        printf("No");
    }else if(!strcmp(s,"BBB")){
        printf("No");
    }else {
        printf("Yes");
    }
}