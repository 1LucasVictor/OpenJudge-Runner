#include<string.h>
char a[11], b[11];
main() {
    scanf("%s%s", a, b);
    if(strlen(a) != strlen(b) - 1) printf("No\n");
    else {
        b[strlen(b) - 1] = '\0';
        if(strcmp(a, b)) printf("No\n");
        else printf("Yes\n");
    }
}