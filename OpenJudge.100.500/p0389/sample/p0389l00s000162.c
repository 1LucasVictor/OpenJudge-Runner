#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char s[201];
    char copy[201];
    unsigned long len;
    int m;  //シャッフル回数
    int h;  //取り出す枚数
    int i, j, k, l;
    
    for (i=0; i<10; i++) {
        scanf("%s", s);
        if (strcmp(s, "-")==0) {
            break;
        }
        len = strlen(s);//文字数カウント
        scanf("%d", &m);
        for (j=0; j<m; j++) {
            scanf("%d", &h);
            strncpy(copy, s, h);
            //copyをsの後ろにいれる
            for (k=0; k<h; k++) {
                s[len+k] = copy[k];
                //printf("copy付け足し%d回目：%s\n", k+1, s);
            }
            //sを前にずらす
            for (l=0; l<len; l++) {
                s[l] = s[l+h];
                //printf("ずらし%d回目：%s\n", l+1, s);

            }
            //sを整える
            s[len] = '\0';
//            printf("整え後：%s\n", s);
        }
        printf("%s\n", s);
    }
    
    return 0;
}
