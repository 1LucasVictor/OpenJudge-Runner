#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[200000];
    char t[200000];
    int s_check, t_check, result=0;
    s_check = scanf("%200000s", s);
    if(s_check==EOF) return 1;
    t_check = scanf("%200000s", t);
    if(t_check==EOF) return 1;
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