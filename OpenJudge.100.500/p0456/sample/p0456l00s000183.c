#include <stdio.h>
#include <string.h>

int main(void){
    char S[200000];
    char T[200000];
    scanf("%s", S);
    scanf("%s", T);
    int rs = 0;
    for (int i=0; S[i] != '\0' ; i++){
        if (S[i] != T[i]) ++rs;
    }
    printf("%d\n",rs);
    return 0;
}