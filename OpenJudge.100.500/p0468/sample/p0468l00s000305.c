#include <stdio.h>
#include <string.h>
int main(){
    char S[4];
    scanf("%s", S);

    if( strcmp( S, "ARC" ) == 0 ){
        printf("ABC\n");
    }else{
        printf("ARC\n");
    }

    return 0;
}