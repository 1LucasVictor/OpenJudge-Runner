#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000+1];
    char command[16];
    char tmp;
    char p[1000+1];
    int q;
    int a, b;
    scanf("%s", str);
    scanf("%d", &q);
    while(q > 0) {
        scanf("%s", command);
        if(strcmp(command, "print") == 0) {
            scanf("%d %d%*c", &a, &b);
            while(a <= b) {
                putchar(str[a]);
                a++;
            }
            putchar('\n');
        } else if(strcmp(command, "reverse") == 0) {
            scanf("%d %d%*c", &a, &b);
            while(a < b) {
                tmp = str[a];
                str[a] = str[b];
                str[b] = tmp;
                a++;
                b--;
            }
        } else if(strcmp(command, "replace") == 0) {
            scanf("%d %d %s", &a, &b, p);
            strncpy(str+a, p, b-a+1);
        }
        q--;
    }
    return 0;
}
