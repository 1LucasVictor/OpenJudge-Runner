/*3.4 hightierra*/
#include <stdio.h>
 
int main(void){
    //変数Nを定義、値を入力
    int N;
    scanf("%d",&N);

    int i,j; //for文のカウンタ
    int judge = 0; //九九で表せるかの判定

    /*二重ループで九九にあるかを判定*/
    for(i=1; i<10; i++){
      	for(j=1; j<10; j++){
          if(N == i*j){
            judge = 1; //表せたらjudgeを１に
            break; //内側for文を抜ける
          }
      	}
        if(judge){
            break; //外側for文を抜ける
        }
    }
    // 判定
    if(judge){
      	printf("Yes\n");
    }else{
      	printf("No\n");
    }

    return 0;
}