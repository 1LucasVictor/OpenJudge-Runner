#include <stdio.h>
#include <string.h>

int main() {
    char str[201], temp[201];
    int m, h, len, j;
    while (1) {
        scanf("%s", str);           // 文字列
        len = strlen(str);
        if (*str == '-') {break;}   // 入力終了
        scanf("%d", &m);            // シャッフル回数
        for (int i=0; i<m; i++) {
            *temp = '\0';
            scanf("%d", &h);
            strcpy(temp, str);      // tempにstrをコピー
            *str = '\0';
            for (j=0; j<(len-h); j++) {
                str[j] = temp[h+j];
            }
            str[j] = '\0';
            temp[h] = '\0';
            strcat(str, temp);
        }
        printf("%s\n", str);
    }
    return 0;
}
