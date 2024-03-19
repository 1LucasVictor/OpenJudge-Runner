#include <stdio.h>
#include <string.h>

int main()
{
    int c=0;
    char s[15]={},t[15]={};
    scanf("%s%s",s,t);
    for(int i=0;s[i];i++) {
        if(s[i]!=t[i]) { c++; }
    }
    if(c==0) { printf("Yes"); }
    else { printf("No"); }

    return 0;
}