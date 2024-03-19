#include <stdio.h>

#include <ctype.h>
#include <string.h>


int main() {
        char s[20] = { 0 };
        char t[20] = { 0 };
        scanf("%s", s);
        scanf("%s", t);
        int i = 0;
        for (i = 0; s[i] != '\0'; i++);
        if(i==1){
        if(s[0]==t[0]){
        printf("Yes");}
        else {
printf("No");}}
        int u;
        for (u =0 ; u < i-1; u++) {
                if (s[u] != t[u]) {
                        printf("No\n");
                        u=i;
                }
                if (u==i-2&&s[i - 1] == t[i - 1]) {
                        printf("Yes");
                }
                else if(u==i-2&&s[i-1]!=t[i-1])  {
                  printf("No");
        }
        }
return 0;
}
                               