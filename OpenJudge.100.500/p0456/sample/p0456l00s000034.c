#include <stdio.h>

int main(){
    char s[200000];
    char t[20000];
    scanf("%s", s);
    scanf("%s", t);

    int cnt;

    for (int i = 0; s[i] != '\0' ; i++){
        char tmp;
        if (s[i] != t[i]){
            tmp = s[i];
            s[i] = t[i];
            t[i] = tmp;
            cnt++;
        }
    }
    
    printf("%d\n", cnt);
}