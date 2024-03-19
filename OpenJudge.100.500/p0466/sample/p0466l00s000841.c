#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
        char s[12] = { 0 };
        char t[12] = { 0 };
        scanf("%s", s);
        scanf("%s", t);
        int i = 0;
        for (i = 0; s[i] != '\0'; i++);

        int u;
        for (u = 0; u < i-1; u++) {
                if (s[u] != t[u]) {
                        printf("No\n");                                                                                                         u=i;
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