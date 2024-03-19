#include <stdio.h>
#include <string.h>

int main() {
    char s[11];
    char t[12];
    int a = 0, bb = 0;
    
    scanf("%s", s);
    scanf("%s", t);
    
    if (strlen(s) + 1 == strlen(t))
        a += 1;
    for (int i = 0; i < strlen(s); ++i){
        if (s[i] == t[i])
            bb += 1;
    }
    if (bb == strlen(s))
        a+= 1;
        
    if (a == 2)
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}
