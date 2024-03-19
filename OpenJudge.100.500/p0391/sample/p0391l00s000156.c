#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    int q, i, j;
    char str[1001], p[1001];

    scanf("%s %d", str, &q);
    int len = strlen(str);

    for(i = 0; i < q; i++){
        char odr[8];
        int begin, end;
        scanf("%s %d %d", odr, &begin, &end);

        if(strcmp(odr, "print") == 0){
            for(j = begin; j <= end; j++){
                printf("%c", str[j]);
            }
            putchar('\n');
        }
        else if(strcmp(odr, "reverse") == 0){
            for(j = 0; j <= (end - begin) / 2; j++){
                char tmp = str[begin + j];
                str[begin + j] = str[end - j];
                str[end - j] = tmp;
            }
            // printf("%s", str);
        }
        else if(strcmp(odr, "replace") == 0){
            scanf("%s\n", p);
            for(j = 0; j < end - begin + 1; j++){
                str[begin + j] = p[j];
            }
            // printf("%s\n", str);
        }
    }
}
