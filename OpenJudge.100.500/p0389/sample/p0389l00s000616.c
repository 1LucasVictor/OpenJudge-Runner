#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[201], stra[201], strb[201];
    int m, i, j, h, lstr, k = 0;
    
    while(1){
        scanf("%s", str);
        lstr = strlen(str);
        if(strcmp(str, "-") == 0 && lstr == 1){
            break;
        }
        scanf("%d", &m);
        for(i = 0; i < m; i++){
            scanf("%d", &h);
            strcpy(stra, str);
            for(j = 0; j < h; j++){
                str[lstr - h + j] = stra[j];
            }
            for(j = 0; j < lstr - h; j++){
                str[j] = stra[j + h];
            }
        }
        for(j = 0; j < lstr; j++){
            strb[k++] = str[j];
        }
        strb[k++] = '\n';
    }
    strb[k] = '\0';
    printf("%s", strb);

    return 0;
}
