#include<stdio.h>
#include<string.h>

int main (void){
    char s[3];
    char *arc="ARC";
    char *abc="ABC";

    scanf("%s",s);

    if(strcmp(s,arc)==0){
        printf("ABC");
    }else {
        printf("ARC");
    }



    return 0;
}