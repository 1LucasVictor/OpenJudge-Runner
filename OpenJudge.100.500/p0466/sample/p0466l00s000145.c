#include <stdio.h>
#include <string.h>

int main(){
    char S[11];
    char T[strlen(S)+1];
    int j=0;
    scanf("%s\n",S);
    scanf("%s",T);
    for (int i=1; i<=strlen(S); i++) {
        if (S[i-1]!=T[i-1]) {
            j++;
        }
    }
    if (strlen(T)!=strlen(S)+1) {
        j++;
    }
    if (j==0&&strlen(S)!=strlen(T)) {
        printf("Yes\n");
    }
    if (j>0||strlen(S)==strlen(T)) {
        printf("NO\n");
    }
    return 0;
}
