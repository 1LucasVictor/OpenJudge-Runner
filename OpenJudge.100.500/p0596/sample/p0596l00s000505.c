#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#include <math.h>

int main(){
    int i,j,count=0,before_count=0,totyu_count,final_count;
    char s[100000],tmp[100000];
    scanf("%s",s);
    for (i=0; s[i]!='\0'; i++) { //元の文字数カウント
        before_count++;
    }
    do {
        count=0;
        totyu_count=0;
        final_count=0;
        for (i=0; s[i]!='\0'; i++) { //01の並びの該当箇所を'2'に上書きする
            if ((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0')) {
                s[i]='2';
                s[i+1]='2';
                count++;
            }
            totyu_count++; //途中の文字数カウント
        }
        //printf("① 01の並びの該当箇所を'2'に上書きした:%s\n",s);
        for (j=0; j<totyu_count; j++) { //tmpを初期化する
            tmp[j]='\0';
        }
        //printf("② tmpを初期化した:%s\n",tmp);
        for (i=0,j=0; s[i]!='\0'; i++) { //残ったs(2以外)をtmpに移行する
            if (s[i]!='2') {
                tmp[j]=s[i];
                j++;
            }
        }
        //printf("③ 残ったs(2以外)をtmpに移行した:%s\n",tmp);
        for (j=0; s[j]!='\0'; j++) { //sを初期化する
            s[j]='\0';
        }
        for (j=0,i=0; tmp[j]!='\0'; j++) { //'2'を取り除いたtmpを次の段階のsへ持っていく
            s[i]=tmp[j];
            i++;
            final_count++;
        }
        
        //printf("④ '2'を取り除いたtmpを次の段階のsへ持っていった:%s\n",s);
    } while (count!=0);
    
    /*for (i=0; s[i]!='\0'; i++) { //最終的に残ったsの文字数をカウント
    }*/
    //つまりもうこれ以上01の組み合わせがなかったら，取り除いた個数を出力
    printf("%d\n", before_count-final_count);
    
    return 0;
}