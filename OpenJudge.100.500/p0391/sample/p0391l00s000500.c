#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1001], mei[8], p[1001];
    int a, b, i, j, q;
    int c = 0, d = 0, e;
    scanf("%s", str);
    scanf("%d", &q);
    int len = strlen(str);
    char pa[1001], pb[1001];

    for(i = 0; i < q; i++){
        scanf("%s %d %d", mei, &a, &b);
        if(!strcmp(mei, "replace")){
            scanf("%s", p);
        }
        if(!strcmp(mei, "print")){
            c = 0;
            for(j = a; j <= b; j++){
                pa[c++] = str[j];
            }
            pa[c] = '\0';
            printf("%s\n", pa);
        }else if(!strcmp(mei, "reverse")){
            strcpy(pb, str);
            e = a;
            for(j = b; j >= a; j--){
                str[j] = pb[e++];
            }
        }else if(!strcmp(mei, "replace")){
            d = 0;
            for(j =a; j <= b; j++){
                str[j] = p[d++];
            }
        }
    }

    return 0;
}
