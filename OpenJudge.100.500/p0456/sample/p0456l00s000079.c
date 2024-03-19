#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int operation(char* S, char* T){
    int cnt = 0;
    for (int i = 0; S[i]!='\0'; i++){
        if (strncmp(&S[i], &T[i], sizeof(char))==0) continue;
        else cnt++;
    }
    return cnt;
}

int main() {
    char S[20000]; 
    char T[20000]; 
    if ((fgets (S, sizeof(S), stdin)!=NULL)&&(fgets (T, sizeof(S), stdin)!=NULL)){
        if ((sizeof(S)<1) || (sizeof(S)>20000) || (sizeof(T)<1) || (sizeof(T)>20000) || sizeof(S)!=sizeof(T)) return -1;
        for (int i = 0; S[i]!='\0'; i++){
            if (isupper(S[i]) || isupper(T[i])) return -1;
        }
    printf("%d\n", operation(S, T));
    }
}
