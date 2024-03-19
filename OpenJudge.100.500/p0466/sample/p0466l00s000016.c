#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[15],t[16];
    int i;
    scanf("%s",s);
    scanf("%s",t);
    for(i=0;i<strlen(s);i++){
        if(s[i]!=t[i])
        {
            printf("No");
            break;
        }
    }
    if(i==strlen(s)){
        if(strlen(t)==strlen(s)+1)
            printf("Yes");
        else printf("No");
    }
    return 0;
}
