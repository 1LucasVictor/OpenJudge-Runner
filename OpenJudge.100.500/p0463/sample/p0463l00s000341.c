/*ex3_2
series2*/
 
# include <stdio.h>
int main(void){
      //各文字の箱を作って読み取り
    int pen;
    scanf("%d", &pen);
    //一のくらいは10で割った余りとして分類できる。
    if(pen%10==3){
        printf("bon\n");
    }else if(pen%10==0 ||pen%10==1||pen%10==6||pen%10==8){
        printf("pon\n");
    }else{
        printf("hon\n");
    }
    return 0;
}
