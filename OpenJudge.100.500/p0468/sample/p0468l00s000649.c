#include <stdio.h>
#include <string.h>

int main(void){
    int a;
    char S[4];
    scanf("%s",S);

    if(strcmp(S,"ABC")){ //同じなら0を返すので、「もし"ABC"じゃなければ」printf("ABC\n");を実行する
        printf("ABC\n");
    }else{
        printf("ARC\n");
    }

    return 0;
}
