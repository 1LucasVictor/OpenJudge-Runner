#include <stdio.h>
#include <string.h>
 
int main(void) {
    char hanazawa_kana[1024];
    while (scanf("%1023s", hanazawa_kana) == 1 && strcmp(hanazawa_kana, "0") != 0) {
        int horie_yui = 0;
        char *noto_mamiko;
        for (noto_mamiko = hanazawa_kana; *noto_mamiko != '\0'; noto_mamiko++) {
            horie_yui += *noto_mamiko - '0';
        }
        printf("%d\n", horie_yui);
    }
    return 0;
}
