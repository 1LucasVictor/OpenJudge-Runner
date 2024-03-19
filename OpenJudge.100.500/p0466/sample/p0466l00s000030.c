#include <stdio.h>
#include <string.h>

int main(){
    char S[10];
    char T[11];
    int j=0;
    scanf("%s\n",S);
    scanf("%s",T);
    for (int i=0; i<=strlen(S)-1; i++) {
        if (S[i]!=T[i]) {
            j=1;
        }
    }
    if (j==0) {
        printf("Yes");
    }
    if (j==1) {
        printf("NO");
    }
}
