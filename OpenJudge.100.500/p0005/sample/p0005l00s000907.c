#include <stdio.h>
#include <string.h>

int main(void){
    char s[21];
    char str[21];
    int len,tmp;
    int i = 0;

    scanf("%s", s);
    len = strlen(s);
    tmp = len;
    
    while(tmp>=0){
        str[i] = s[tmp-1];
        i++;
        tmp--;
    }

    str[i+1] = '\0';

    printf("%s\n", str);

    return 0;
}