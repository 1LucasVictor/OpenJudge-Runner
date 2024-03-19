#include <stdio.h>
#include <string.h>
int main(){
    char S[3];
    char n[]="ABC";
    scanf("%s",S);
    if (strcmp(S,n)==0) {
        printf("ARC");
    }else{
        printf("ABC");
    }
}
