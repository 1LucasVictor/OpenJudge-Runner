#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    char card[201];
    char sub[201]; //後ろに連結するための文字列
    char target[201];//残りの文字列
    char h[201];
    int m,i,j,k,x;

    while(1){
        scanf("%s", card);
        if(card[0] == '-'){
            break;
        }
        scanf("%d", &m);

        for(i = 0; i < m; i++){
            scanf("%s", &h[i]);
            if(h[i] == '-'){
                break;
            }
            x = atoi(&h[i]);
            memset(target, '\0', sizeof(target));
            memset(sub, '\0', sizeof(sub));
            //前からxばんめまでをsubに入れる
            for(j = 0; j < x; j++){
                sub[j] = card[j];
            }
            //xから終わりまでtargetに入れる
            for(j = x, k = 0; j < strlen(card); j++ , k++){
                target[k] = card[j];
            }
            memset(card, '\0', sizeof(card));
            for(k = 0; k < strlen(target); k++){
                card[k] = target[k];
            }
            strcat(card,sub);//文字列を連結
            //printf("sub:%s\n", sub);//確認用
            //printf("target:%s\n",target);//確認用

        }
        printf("%s\n",card);
    }

    //printf("Length: %d\n", length);
    return 0;
}

