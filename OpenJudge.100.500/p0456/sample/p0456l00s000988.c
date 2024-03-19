#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[200001];
    char t[200001];
    int S, T, result=0;
    S = scanf("%200000s", s);
    if(S==EOF) return 1;
    T = scanf("%200000s", t);
    if(T==EOF) return 1;
    if(strlen(s)!=strlen(t)) return 1;
    int i=0;
    while(s[i]!='\0'){
        if(isupper(s[i])) return 1;
        if(isupper(t[i])) return 1;
        if(!isalpha(s[i])) return 1;
        if(!isalpha(t[i])) return 1;
        if(s[i]!=t[i]){
            result++;
        }
        i++;
    }
    printf("%d\n", result);
    return 0;
}