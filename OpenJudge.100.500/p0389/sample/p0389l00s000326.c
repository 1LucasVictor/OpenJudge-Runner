#include <stdio.h>
#include <string.h>

int main(void) {
    char str[400]={'\0'}, tmp[400]={'\0'};
    int m, h, i, j;

    while (1) {
        scanf("%s", str);
        if (!strcmp(str, "-")) break;
        scanf("%d", &m);
        while (m>0) {
            scanf("%d", &h);
            for (i=h; str[i]!='\0'; i++) tmp[i-h]=str[i];
            for (j=0;j<h; j++) tmp[i-h+j]=str[j];
            for (i=0; tmp[i]!='\0'; i++) str[i]=tmp[i];
	        m--;
        }
        printf("%s\n", tmp);
    }
    return 0;
}

