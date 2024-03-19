#include <stdio.h>
#include <string.h>

int main(){
    char s[4];
    char abc[] = "ABC";

    scanf("%s", s);

    if(strcmp(s, abc) == 0){
        printf("ARC");
    }else{
        printf("ABC");
    }

}