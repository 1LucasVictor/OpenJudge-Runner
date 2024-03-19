#include <stdio.h>
#include <string.h>
int main(){
    char s[1002];
    int x, n;
    scanf("%s", s);
    while(s[0]!='0'){
        x=0;
        n=strlen(s);
        for(int i=0; i<n; i++){
            x+=s[i]-48;
        }
        printf("%d\n", x);
        scanf("%s", s);
    }
}
