#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    char card[201];
    char cardcpy1[201],cardcpy2[201];
    int m,h,i,j,substr,wordcount,lenght;
    while(1){
        scanf("%s",card);
        if(card[0] =='-')break;
        scanf("%d",&m);
        for(i = 0,lenght = strlen(card);i < m;i++){
            scanf("%d",&h);//hは対象文字数
            substr = h;//substrには対象文字以外の先頭の
            wordcount = lenght - h;

            /*cardcpy1に対象文字を代入する*/
            strncpy(cardcpy1,card,h);
            cardcpy1[h]='\0';
            //printf("cardcpy1:%s\n",cardcpy1);//ﾃﾞﾊﾞｯｸﾞ
            /*cardcpy2に対象文字以外を代入する*/
            strncpy(cardcpy2,&card[h],wordcount);
            cardcpy2[wordcount]='\0';
            //printf("cardcpy2:%s\n",cardcpy2);//ﾃﾞﾊﾞｯｸﾞ

            /*cardcpy2にシャッフルの結果を代入*/
            strcat(cardcpy2,cardcpy1);
            memset(card,0,sizeof(card));
            card[200]='\0';
            strcpy(card,cardcpy2);
            //printf("現在のシャッフル:%s\n",card);//ﾃﾞﾊﾞｯｸﾞ

        }
    printf("%s\n",card);
    }
return 0;
}

