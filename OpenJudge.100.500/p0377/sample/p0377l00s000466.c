#include<stdio.h>
int main(){
        int n,i,j,s;
        int card[4][13];
        char mark;

        //初期化
        for(i = 0;i < 4;i++){
            for(j = 0;j < 13;j++){
                card[i][j] = 0;
            }
        }

        //枚数を入力
        scanf("%d",&n);
        for(i = 0;i < n;i++){
            //マークと数値を入力
            scanf("%c %d", &mark, &s);
            //スペードの場合
            if(mark == 'S'){
               card[0][s - 1] = 1;
            }
            //ハートの場合
            else if(mark == 'H'){
               card[1][s - 1] = 1;
            }
            //クローバーの場合
            else if(mark == 'C'){
               card[2][s - 1] = 1;
            }
            //ダイヤの場合
            else if(mark == 'D'){
               card[3][s - 1] = 1;
            }
        	else{
        		i--;
        	}
        }

        //余ったカードを出力
        for(i = 0;i < 4;i++){
           for(j = 0;j < 13;j++){
              if(card[i][j] == 0){
                if(i == 0){
                   printf("%c %d\n",'S',j + 1);
                }
                else if(i == 1){
                   printf("%c %d\n",'H',j + 1);
                }
                else if(i == 2){
                   printf("%c %d\n",'C',j + 1);
                }
                else if(i == 3){
                   printf("%c %d\n",'D',j + 1);
                }
              }
           }
        }
        return 0;
}

