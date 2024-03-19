#include <stdio.h>

int main(){
    char s[3];
    int cnt=0;
    scanf("%s",s);
    for (int i=0; i<3; i++) cnt+= s[i]=='1';
    printf("%d",cnt);
    return 0;
}