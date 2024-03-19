#include <stdio.h>
#include <string.h>

int main() {
    char S[10],T[11];
    int len_S,len_T;
    
    scanf("%s",S);
    scanf("%s",T);
    
    len_S = strlen(S);
    len_T = strlen(T);
    if (len_T != len_S + 1){
        printf("No\n");
    }else{
        if (strncmp(S,T,len_S) == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    
    return 0;
}
