#include <stdio.h>
#include <string.h>

int main(void){
    char S[20];
    char T[20];

    int i,j;

    scanf("%s%s", S, T);
 /* 文字数をカウント */
    for(i=0; S[i]!='\0'; ++i);
    for(j=0; T[j]!='\0'; ++j);

    if (strncmp(S, T, i) == 0 && i+1 == j){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
		
    return 0;
}