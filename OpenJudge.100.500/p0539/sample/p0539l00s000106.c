/*ex3_4
series2*/
 
# include <stdio.h>
int main(void){
      //各文字の箱を作って読み取り
    int N;
    scanf("%d", &N);
    int i=1;//調べている九九のうちの片方の数字(1から9)
    while(i<10){//割り切れるまで確かめる
        if (N%i==0 && N/i<10){//Nが1から9の中で割り切れるものがあり、かつその商が9以下の時、Yesである。
            printf("Yes\n");
            return 0;//Yesの時処理を終了させる
        }
        i++;
    }
    //いずれにも該当しない時はNoを出力する。
    printf("No\n");
    return 0;
}
