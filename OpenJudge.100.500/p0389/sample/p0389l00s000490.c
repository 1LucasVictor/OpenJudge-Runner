#include <stdio.h>
#include <ctype.h>

int main(void){
    char pile[201]={0}, buffer[201]={0}, cutbuffer[201]={0};
    int num=0, shuffle=0, index=0;
    
    
    for(;scanf("%s", pile) && strcmp("-", pile);){
        for(index=0, scanf("%d", &num); num > index && scanf("%d", &shuffle); index++){
            strncpy(buffer, pile, shuffle);                                     /*bufferの中に山札の前からシャッフル枚コピーされる*/
            strncpy(cutbuffer, &(pile[shuffle]), strlen(pile)-shuffle);    /*詰め用のバッファに山札残りを詰め込む*/
            strncpy(pile, cutbuffer, 201); /*山札を詰め戻す+他をナルで埋める*/
            strncat(pile, buffer, shuffle); /*山札のケツにバッファ分を付ける*/
            
            strncpy(buffer, "\0", 201); /*バッファー系のナル詰め初期化*/
            strncpy(cutbuffer, "\0", 201);
        }
        
        printf("%s\n", pile); /*シャッフル後の山札の表示*/
    }
    
    return 0;
}