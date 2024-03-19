#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1001], op[8], tmp[1001], p[1002];
    int a, b, q, x;
    scanf("%s", str);
    scanf("%d", &q);
    for(int i=0; i<q; i++){
        scanf("%s", op);
        scanf("%d %d", &a, &b);
        if(strcmp(op, "print")==0){
            for(int i=a; i<=b; i++){
                printf("%c", str[i]);
            }
            printf("\n");
        }else if(strcmp(op, "reverse")==0){
            strcpy(tmp, str);
            x=a;
            for(int i=b; i>=a; i--){
                str[x] = tmp[i];
                x++;
            }
        }else if(strcmp(op, "replace")==0){
            scanf("%s", p);
            strncpy(&str[a], p, b-a+1);
        }
    }
    return 0;
}

