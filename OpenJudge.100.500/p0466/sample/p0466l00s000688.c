#include <stdio.h>
#include <string.h>
int main() {
    char S[11],T[12];
    long len_S,len_T;
    scanf("%s",S);
    scanf("%s",T);
    len_S = strlen(S);
    len_T = strlen(T);
    if (strncmp(S,T,len_S) == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    return 0;
}
