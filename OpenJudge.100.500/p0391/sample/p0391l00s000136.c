#include <stdio.h>
#include <string.h>

int main(void){
    int a, b;
    int q;
    int i, j, temp;
    char str[1000];
    char command[1000];
    char rpc[1000];

    scanf("%s", str);
    scanf("%d", &q);
    for(i = 0; i < q; i++){
        scanf("%s %d %d", command, &a, &b);
        if(!strcmp(command, "replace")){
            scanf("%s", rpc);
            for(j = a; j <= b; j++)
                str[j] = rpc[j- a];
        }else if(!strcmp(command,"reverse")){
            temp = str[a];
            str[a] = str[b];
            str[b] = temp;
        }else if(!strcmp(command, "print")){
            for(j = a; j <= b; j++)
                putchar(str[j]);
            puts("");
        }
    }
    return 0;
}

