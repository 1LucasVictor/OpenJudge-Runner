/* ex3_2
   masaaki52	*/
#include <stdio.h>
int main(void){
  int number;
  int ichi;
  scanf("%d",&number);//numberに値を入力
  ichi = number % 10;//numberを10で割った余りをichiに代入
  if(ichi == 3){//ichiが3の場合
    printf("bon\n");//bonを出力
  }
  else if(ichi == 0 || ichi == 1 || ichi == 6 || ichi == 8){//ichiが0,1,6,8の場合
    printf("pon\n");//ponを出力
  }
  else{//上記以外の場合
    printf("hon\n");//honを出力
  }
  return 0;
}
