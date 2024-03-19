#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    char t[50];

    scanf("%s", s);
    scanf("%s", t);
    int T=strlen(t);

    int change_count = 0;
    for (int i = 0; i <= T; i++)
    {
        if (s[i]!=t[i])
        {
            change_count++;
        }
        
    }
    printf("%d\n", change_count);
    return 0;
}