#include <stdio.h>
#include <string.h>
int main(){
    char s[200000], t[200000];
    int count = 0, n = 0;
    scanf("%s", s);
    scanf("%s", t);
    n = strlen(s);
    for (int i = 0; i < n; i++){
        if (s[i] != t[i]){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}