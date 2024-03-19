#include <stdio.h>
#include <string.h>

void main()
{
    char S[256], T[256];
    int i;

    scanf("%s", S);
    scanf("%s", T);

    // 元の文字数より1文字多いかチェック
    if(strlen(S) != (strlen(T) -1)){
        printf("No\n");
        return;
    }

    // 最初の入力と次の入力の1文字手前まで同じかチェック
    for(i=0;i<strlen(S);i++){
        if(S[i] != T[i]){
            printf("No\n");
            return;
        }
    }
    
    printf("Yes\n");
}
