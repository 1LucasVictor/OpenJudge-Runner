#include <stdio.h>
#include <string.h>

int main(){
    char S[11];
    char T[strlen(S)+1];
    int j=0;
    scanf("%s\n",S);
    scanf("%s",T);
    for (int i=0; i<=strlen(S)-1; i++) {
        if (S[i]!=T[i]) {
            j=1;
        }
    }
    if (j==0&&strlen(S)!=strlen(T)) {
        printf("Yes\n");
    }
    if (j==1||strlen(S)==strlen(T)) {
        printf("NO\n");
    }
    return 0;
}
