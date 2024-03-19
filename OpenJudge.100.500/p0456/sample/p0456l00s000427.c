#include <stdio.h>

int main() {
    char s[200000],t[200000];
    int ans = 0;
    scanf("%s",s);
    scanf("%s",t);
    for(int i = 0;s[i] != '\0';i++){
        if(s[i] != t[i])ans++;
    }
    printf("%d\n",ans);
    return 0;
}
