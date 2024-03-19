#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    char s[5];
    scanf("%s",s);
    if(s[0]==s[1] && s[1]==s[2]){
        printf("No");
        return 0;
    }
    else {
        printf("Yes");
        return 0;
    }
}