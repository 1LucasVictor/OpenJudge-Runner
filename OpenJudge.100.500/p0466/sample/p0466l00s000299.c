#include <stdio.h>
int main (void){
    int i;
    char S[20], T[20];
    scanf("%s%s", S, T);
    for(i=0;S[i]!='\0';i++){
        if(S[i]==T[i]){
            printf("Yes\n");
            
        }else printf("No\n");
    return 0;
    }
}