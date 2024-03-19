#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char token[100]={};
    while(fgets(token, sizeof(token), stdin)!=NULL){
        if (token[0]==token[1]&&token[0]==token[2]) printf("No");
        else printf("Yes");
    }
    return 0;
}

