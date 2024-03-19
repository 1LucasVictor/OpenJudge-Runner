#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char token[100]={},*s_b="BBB",*s_a="AAA";
    while(fgets(token, sizeof(token), stdin)!=NULL){
        if (strcmp(token, s_a)==0||strcmp(token, s_b)==0) printf("No");
        else printf("Yes");
    }
    return 0;
}


