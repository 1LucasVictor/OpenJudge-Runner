#include <stdio.h>
 
int main(void)
{
    char s[1201];
    int i;
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++){
        if('a'<=s[i]&&s[i]<='z')s[i]-='a'-'A';
        else if('A'<=s[i]&&s[i]<='Z')s[i]+='a'-'A';
    }
    printf("%s",s);
    return 0;
}
