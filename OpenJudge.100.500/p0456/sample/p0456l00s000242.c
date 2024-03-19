#include <stdio.h>

int main()
{
    int i = 0;
    int result = 0;
    char s[100];
    char t[100];
    scanf("%s", s);
    scanf("%s", t);
    while(s[i]!='\0'){
        if(s[i]!=t[i]){
            result++;
        }
        i++;
    }
    printf("%d\n", result);
}