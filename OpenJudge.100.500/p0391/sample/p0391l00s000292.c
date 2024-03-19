#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1001]={'\0'}, buf[10]={'\0'}, rep[1001]={'\0'};
    int a, b, q, i;

    scanf("%s\n%d", str, &q);
    while (q>0) {
        scanf("%s", buf);
        if (strcmp(buf, "replace")==0) {
            scanf("%d %d %s", &a, &b, rep);
            for (i=a;i<=b;i++) str[i]=rep[i-a];
        }
        if (strcmp(buf, "reverse")==0) {
            scanf("%d %d", &a, &b);
            for (i=a;i<=b;i++) rep[b-i]=str[i];
            for (i=a;i<=b;i++) str[i]=rep[i-a];
        }
        if (strcmp(buf, "print")==0) {
            scanf("%d %d", &a, &b);
            for (i=a;i<=b;i++) printf("%c", str[i]);
            printf("\n");
        }
        for (i=0;i<sizeof(buf);i++) buf[i]='\0';
        q--;
    }
    for (i=0;i<sizeof(str);i++) str[i]='\0', rep[i]='\0';

    return 0;
}

