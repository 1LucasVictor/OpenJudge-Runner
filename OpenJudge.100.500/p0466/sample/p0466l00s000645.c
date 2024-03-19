#include <stdio.h>
#include <string.h>

int main(){
    char s[11], t[11];
    int lens, lent;
    int cnt=0, len;

    scanf("%s", s);
    scanf("%s", t);
    lens = strlen(s);
    lent = strlen(t);
    len = lent - lens;

    for(int i = 0; i < lens; i++){
        if(s[i] == t[i]){
            cnt++;
        }
    }
    if(cnt == lens && len == 1){
        printf("Yes");
    }else{
        printf("No");
    }
    }