#include <stdio.h>
#include <string.h>

int main(void){
    char *S;
    char *ABC="ABC";

    scanf("%s",S);
    if(strcmp(S,ABC)==0){
        printf("ARC");
    }else{
        printf("ABC");
    }

    return 0;
}