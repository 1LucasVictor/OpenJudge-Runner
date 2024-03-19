#include <stdio.h>
#include <string.h>
#define MAX 201
  
int main(void) {
    int i, n;
    char str[MAX], buf[MAX];
    while(scanf("%s", str), strcmp(str, "-")) {
        for(scanf("%d", &i); i--; strcpy(str, buf)) {
            scanf("%d", &n);
            strcpy(buf, str + n), strncat(buf, str, n);
        }
        printf("%s\n", str);
    }
    return 0;
}